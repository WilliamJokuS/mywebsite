#include <bits/stdc++.h>
using namespace std;
string curr,tmp1,tmp2;
double rate,e[35][35];
map<string,int> exchan;
int main(){
	int n,m,idx,init;
	while(cin>>n&&n!=0){
		init++;
		bool arbi=false;
		memset(e,0,sizeof e);
		for(int i=1;i<=n;i++){
			e[i][i]=1;
		}
		for(int i=1;i<=n;i++){
			cin>>curr;
			exchan[curr]=i;
		}
		cin>>m;
		for(int i=1;i<=m;i++){
			cin>>tmp1>>rate>>tmp2;
			e[exchan[tmp1]][exchan[tmp2]]=rate;
		}
		for(int k=1;k<=n;k++){
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					if(e[i][j]<e[i][k]*e[k][j])
					e[i][j]=e[i][k]*e[k][j];
				}
			}
		}
		for(int i=1;i<=n;i++){
			if(e[i][i]>1)arbi=true;
		}
		if(arbi)cout<<"Case "<<init<<": Yes"<<endl;
		else cout<<"Case "<<init<<": No"<<endl;
		exchan.clear();
	}
	return 0;
}
