#include <bits/stdc++.h>
using namespace std;
int n,m,q,r,c,x;
int a[5005][5005];
int maxr[5005];
int maxc[5005];
int main(){
	cin>>n>>m>>q;
	for(int i=1;i<=n;i++){
		int max=0;
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]>max)max=a[i][j];
		}
		maxr[i]=max;
	}
	for(int i=1;i<=m;i++){
		int max=0;
		for(int j=1;j<=n;j++){
			if(a[j][i]>max)max=a[j][i];
		}
		maxc[i]=max;
	}
	int cnt=0;
	for(int j=1;j<=n;j++){
		for(int k=1;k<=m;k++){
			if(maxr[j]==maxc[k])cnt++;
		}
	}
	for(int i=1;i<=q;i++){
		cin>>r>>c>>x;
		maxr[r]=max(maxr[r],x);
		maxc[c]=max(maxc[c],x);
		for(int j=1;j<=n;j++){
			maxr[]
		}
		for(int j=1;j<=m;j++){
			
		}
		cout<<cnt<<endl;
	}
}
