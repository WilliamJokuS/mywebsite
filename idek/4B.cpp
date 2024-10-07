#include <bits/stdc++.h>
using namespace std;
int skor[8];
int score[6][60000][8];
int idx=1;
int sizee[8];
int a[8];

void coba(int i,int j,int sz){
	if(j>sz){
		i++;
		j=i+1;
	}
	if(i==sz){
		for(int k=1;k<=sz;k++)score[sz][idx][k]=skor[k];
		idx++;
		return;
	}
	skor[i]+=1;
	skor[j]+=1;
	coba(i,j+1,sz);
	skor[i]-=1;
	skor[j]-=1;
	
	skor[i]+=3;
	coba(i,j+1,sz);
	skor[i]-=3;
	
	skor[j]+=3;
	coba(i,j+1,sz);
	skor[j]-=3;
	
	return;
}
int main(){
	for(int i=2;i<=5;i++){
		idx=1;
		coba(1,2,i);
		sizee[i]=idx;
	}
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		bool yes=false;
		for(int i=1;i<=sizee[n];i++){
			bool ada=true;
			for(int j=1;j<=n;j++){
				if(a[j]!=score[n][i][j]){
					ada=false;
					break;
				}
			}
			if(ada){
				yes=true;
				break;
			}
		}
		if(yes)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
