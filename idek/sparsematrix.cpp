#include <stdio.h>
#include <stdlib.h>

#define MaxSize 100
typedef int ElemType;

typedef struct
{
    int i,j;// row index and column index
    ElemType elem;// element value located at (row,col)
}Triple;

typedef struct
{
    Triple data[MaxSize];
    int mu, nu, tu; // row number, column number, number of non-zero entries
     //rpos stores the index of the first non-zero element of each row within the triple list,
     //or the i-th value indicates the number of non-zero elements in the matrix less then row i,
     //cpos stores the index of the first non-zero element of each column within the triple list
     // of the transpose of a matrix, this array is used for fast transpose algorithm,
     //or the j-th value indicates the number of non-zero elements in the matrix less then column j
     int *rpos, *cpos;
}TSMatrix,*PTSMatrix;

void createTSMatrix(PTSMatrix pm, int row, int col);
void AddTSMatrix(TSMatrix M, TSMatrix N, TSMatrix *T);
void MultiplyTSMatrix(TSMatrix M, TSMatrix N, TSMatrix *T);
void TransposeTSMatrix(TSMatrix M,TSMatrix *T);
void printTSMatrix(PTSMatrix pm);

void createTSMatrix(PTSMatrix pm, int row, int col)
{
    pm->mu = row;
    pm->nu = col;
    pm->tu = 0;

    int ia,ja,flag,cnt;
    flag = 1;
    cnt = 0;
    ElemType element;
    //get entries from input, (0 0 0) indicates the stop sign
    while (flag)
    {
        scanf("%d %d %d", &ia,&ja,&element);// ia and ja start from 1
        if (ia||ja||element)
        {
            pm->data[cnt].i=ia;
            pm->data[cnt].j=ja;
            pm->data[cnt].elem = element;
            cnt++;
        }
        else{
            flag = 0;
        }
    }
    pm->tu = cnt;

    //calculate rpos and cpos
    int *num = (int *)malloc((pm->nu+1)*sizeof(int));
    pm->cpos = (int *)malloc((pm->nu+2)*sizeof(int));
    pm->rpos = (int *)malloc((pm->mu+2)*sizeof(int));
    if (pm->tu){
        for (int icol=1;icol<=pm->nu;icol++){
            num[icol]=0;
        }
        for (int t=0;t<pm->tu;t++){
            num[pm->data[t].j]++;
        }
        pm->cpos[1]=0;
        for (int icol=2;icol<=pm->nu+1;icol++){
            pm->cpos[icol]=pm->cpos[icol-1]+num[icol-1];
        }

        for (int irow=1;irow<=pm->mu;irow++){
            num[irow]=0;
        }
        for (int t=0;t<pm->tu;t++){
            num[pm->data[t].i]++;
        }
        pm->rpos[1]=0;
        for (int irow=2;irow<=pm->mu+1;irow++){
            pm->rpos[irow]=pm->rpos[irow-1]+num[irow-1];
        }
    }
    free(num);
}
void AddTSMatrix(TSMatrix M, TSMatrix N, TSMatrix *T)
{
    // Initialize T
    T->mu = M.mu;
    T->nu = M.nu;
    T->tu = 0;
    int m = 0, n = 0, t = 0;
    while (m < M.tu && n < N.tu)
    {
        // Compare row and column indices
        if (M.data[m].i<N.data[n].i || (M.data[m].i == N.data[n].i && M.data[m].j<N.data[n].j))
        {
            T->data[t] = M.data[m];
            t++;
            m++;
        }
        else if (M.data[m].i > N.data[n].i || (M.data[m].i == N.data[n].i && M.data[m].j > N.data[n].j))
        {
            T->data[t++] = N.data[n++];
        }
        else
        {
            // If indices are the same, add the elements
            T->data[t] = M.data[m];
            T->data[t].elem += N.data[n].elem;
            // Move to the next element in both matrices
            m++;
            n++;
           
            if (T->data[t].elem != 0)
                t++; //ignore 0 element
        }
    }
    //put the element that is not included in the addition process
    while (m < M.tu)
    {
        T->data[t++] = M.data[m++];
    }
    while (n < N.tu)
    {
        T->data[t++] = N.data[n++];
    }
    // Update the number of non-zero elements
    T->tu = t;
}


void MultiplyTSMatrix(TSMatrix M, TSMatrix N, TSMatrix *Q)
{
    // Initialize Q
    Q->mu = M.mu;
    Q->nu = N.nu;
    Q->tu = 0;

    // Initialize an array to store the sum of products for each row and column combination
    ElemType **temp = (ElemType **)calloc((M.mu + 1), sizeof(ElemType *));
    for (int i = 1; i <= M.mu; i++)
    {
        temp[i] = (ElemType *)calloc((N.nu + 1), sizeof(ElemType));
    }

    // Loop through elements of M
    for (int t = 0; t < M.tu; t++)
    {
        // Get the current element of M
        int Mrow = M.data[t].i;
        int Mcol = M.data[t].j;
        ElemType Melem = M.data[t].elem;

        // Loop through elements of N in the corresponding column
        for (int k = N.cpos[Mcol]; k < N.cpos[Mcol + 1]; k++)
        {
            // Get the current element of N
            int Nrow = N.data[k].i;
            int Ncol = N.data[k].j;
            ElemType Nelem = N.data[k].elem;

            // Update the sum of products for the corresponding row and column in Q
            temp[Mrow][Ncol] += Melem * Nelem;
        }
    }

    // Fill in the non-zero elements of Q
    for (int i = 1; i <= M.mu; i++)
    {
        for (int j = 1; j <= N.nu; j++)
        {
            if (temp[i][j] != 0)
            {
                Q->data[Q->tu].i = i;
                Q->data[Q->tu].j = j;
                Q->data[Q->tu].elem = temp[i][j];
                Q->tu++;
            }
        }
    }

    // Free memory allocated for temp
    for (int i = 1; i <= M.mu; i++)
    {
        free(temp[i]);
    }
    free(temp);
}





void TransposeTSMatrix(TSMatrix M, TSMatrix *T)
{
    // Initialize T
    T->mu = M.nu;
    T->nu = M.mu;
    T->tu = M.tu;

    // Initialize an array to store the number of elements in each column of M
    int *num = (int *)calloc((M.nu + 1), sizeof(int));

    // Count the number of elements in each column of M
    for (int t = 0; t < M.tu; t++)
    {
        int col = M.data[t].j;
        num[col]++;
    }

    // Initialize an array to store the starting position of each column in result matrix T
    T->rpos = (int *)malloc((T->nu + 2) * sizeof(int));
    T->rpos[1] = 0;
    for (int col = 2; col <= T->nu + 1; col++)
    {
        T->rpos[col] = T->rpos[col - 1] + num[col - 1];
    }

    // Initialize an array to store the number of elements in each row of T
    int *numRow = (int *)calloc((T->mu + 1), sizeof(int));

    // Fill in the data for T
    for (int t = 0; t < M.tu; t++)
    {
        int col = M.data[t].j;
        int pos = T->rpos[col]; // Get the position to insert in T
        T->data[pos].i = M.data[t].j;
        T->data[pos].j = M.data[t].i;
        T->data[pos].elem = M.data[t].elem;
        T->rpos[col]++; // Move to next position in T
        numRow[M.data[t].i]++; // Count the number of elements in each row of T
    }

    // Calculate the starting position of each row in result matrix T
    T->rpos[1] = 0;
    for (int row = 2; row <= T->mu + 1; row++)
    {
        T->rpos[row] = T->rpos[row - 1] + numRow[row - 1];
    }

    free(num); // Free memory allocated for num
    free(numRow); // Free memory allocated for numRow
}



void printTSMatrix(PTSMatrix pm)
{
    for (int m=0;m<pm->tu;m++)
    {
        printf("%d %d %d\n", pm->data[m].i, pm->data[m].j, pm->data[m].elem);
    }
}

int main()
{
    TSMatrix M, N, R1, R2, R3;
    int m,n;

    scanf("%d %d", &m,&n);
    createTSMatrix(&M,m,n);
    scanf("%d %d", &m,&n);
    createTSMatrix(&N,m,n);

    AddTSMatrix(M,N,&R1);
    printf("\nResult of Addition:(%d*%d)\n",R1.mu,R1.nu);
    printTSMatrix(&R1);

    MultiplyTSMatrix(M,N,&R2);
    printf("\nResult of Multiplication:(%d*%d)\n",R2.mu,R2.nu);
    printTSMatrix(&R2);

    TransposeTSMatrix(M,&R3);
    printf("\nResult of Transpose on the first matrix: (%d*%d)\n",R3.mu,R3.nu);
    printTSMatrix(&R3);

    return 0;
}
