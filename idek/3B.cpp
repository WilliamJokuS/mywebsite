#include <bits/stdc++.h>
using namespace std;
int r,c;
int a[105][105];
void solve(int x){
	for(int j=1;j<=c;j++){
		for(int i=1;i<=r;i++){
			int tmp=1;
			if(r==1&&c==1)tmp=0;
			else{
				if(r==1)tmp*=1;
				else if(i==1)tmp*=a[i+1][j];
				else if(i==r)tmp*=a[i-1][j];
				else tmp*=a[i-1][j]*a[i+1][j];
				if(c==1)tmp*=1;
				else if(j==1)tmp*=a[i][j+1];
				else if(j==c)tmp*=a[i][j-1];
				else tmp*=a[i][j-1]*a[i][j+1];
			}
			if(tmp==x){
				cout<<i<<" "<<j<<endl;
				return;
			}
		}
	}
	cout<<"0 0\n";
	return ;
}
int main(){
	int x;
	cin>>r>>c;
	cin>>x;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>a[i][j];
		}
	}
	solve(x);
}
