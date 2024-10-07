#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
	int payable, n;
    int M[10001], A[101];
    while(t--){
        cin>>payable>>n;
        for(int i = 1; i <= N; i++)
            scanf("%d", &A[i]);
        memset(M, inf, sizeof(M));
        M[0] = 0;
        for(int i=1;i<=N;i++)
            for(int j=10000;j>0;j--)
                if(j-A[i]>=0 && M[j-A[i]]+1<M[j])
                    M[j]=M[j-A[i]]+1 ;

        int i;
        for(i = payable; M[i] == inf; i++);

        printf("%d %d\n", i, M[i]);
    }
}
