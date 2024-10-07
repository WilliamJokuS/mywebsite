#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int N,M;
int a[105][105];
int find(int x,int y,int l,int r){
	if(a[x][y]>r)r=a[x][y];
	else if(a[x][y]<l)l=a[x][y];
	if(x==N&&y==M)return r-l;
	else if(x>N||y>M)return 10000000;
	else return min(find(x+1,y,l,r),find(x,y+1,l,r));
	
}
int main(){
	cin>>N>>M;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			cin>>a[i][j];
		}
	}
	if(a[1][1]>a[N][M])cout<<find(1,1,a[1][1],a[N][M])<<endl;
	else cout<<find(1,1,a[N][M],a[1][1])<<endl; 
}
