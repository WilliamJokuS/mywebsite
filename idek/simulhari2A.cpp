#include <bits/stdc++.h>
using namespace std;
bool kena[10005][10005];
int n,k,x,y;
void nyebar(int x,int y){
	if(x<1||y<1)return;
	if(x>n||y>n)return;
	kena[x][y]=true;
	return;
}
void pasang(int x,int y){
	kena[x][y]=true;
	for(int i=1;i<n;i++){
		nyebar(x+i,y+i);
		nyebar(x+i,y-i);
		nyebar(x-i,y+i);
		nyebar(x-i,y-i);
	}
	return;
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>x>>y;
		pasang(x,y);
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(kena[i][j]==false)cnt++;
		}
	}
	cout<<cnt<<endl;
}
