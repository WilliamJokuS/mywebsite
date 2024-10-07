#include <bits/stdc++.h>
using namespace std;
int n,r,y,j;
char c[15];
bool yakin,udh[15];
int nil[15],jwb[100005];
struct gay{
    int nilai;
    char jenis;
};
gay gaya[15];
string s;
void solve(int x){
	if(x==r){
		int tot=0;
		for(int i=0;i<r;i++){
			tot+=nil[i];
		}
		jwb[tot]++;
	}else{
		for(int i=0;i<n;i++){
			if(udh[i])continue;
			nil[x]=gaya[i].nilai;
			c[x]=gaya[i].jenis;
			if(c[x-1]=='P')nil[x]*=2;
			else if(c[x-1]=='L')nil[x]/=2;
			if(yakin)nil[x]+=y;
			if(c[x]=='Y')yakin=true;
			udh[i]=true;
			solve(x+1);
			if(c[x]=='Y')yakin=false;
			udh[i]=false;
		}
	}
}
int main(){
    getline(cin,s);
    cin>> n>> r>> y>> j;
    for(int i=0;i<n;i++){
    	cin>>gaya[i].nilai;
		cin>>gaya[i].jenis;
	}
	solve(0);
	for(int i=100000;i>=0;i--){
		jwb[i]+=jwb[i+1];
	}
	while(j--){
		int tmp;
		cin>>tmp;
		cout<<jwb[tmp+1]<<endl;
	}
}
