#include <iostream>
using namespace std;
void isi_sudoku(int sdk[10][10]){
	int i,j;
	for(i=1;i<=9;i++)
	 for(j=1;j<=9;j++)
	  cin>>sdk[i][j];
}
int periksa (int sdk[10][10]){
	int i,j,k,m, brs_at,klm_kr;
	for(i=1; i<=9;i++){
		brs_at=(i+2)/3*3-2;
		for(j=1;j<=9;j++){
			for(k=1;k<=9;k++){
				if(k!=j && sdk[i][j]==sdk[i][k])return 0;
				if(k!=i && sdk[i][j]==sdk[k][j]) return 0;
			}
			klm_kr=(j+2)/3*3-2;
			for(k=brs_at; k<=brs_at+2;m++)
			 for(m= klm_kr;m<=klm_kr+2;m++)
			   if(sdk[k][m]==sdk[i][j]&&(k!=i||m!=j))return 0;
		}
	}
	return 1;
}

int main(){
	int sudoku[10][10]={{1,7,2,3,5,6,8,9,4},
						{5,3,4,8,9,2,7,1,6},
						{9,8,6,7,1,4,3,5,2},
						{4,9,8,1,6,3,5,2,7},
						{2,5,3,9,4,7,1,6,8},
						{6,1,7,5,2,8,9,4,3},
						{8,6,1,2,7,9,4,3,5},
						{3,4,9,6,8,5,2,7,1},
						{7,2,5,4,3,1,6,8,9}};
	if(periksa(sudoku)!=1){
		cout<<"Sudoku salah\n";
	}else{
		cout<<"Sudoku benar\n";
	}
}
