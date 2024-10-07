#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t>0){
		t--;
		int n;
		cin>>n;
		int x=n*(n-1)/2;
		int a[x+5];
		int jwb[n+5];
		memset(a,0,sizeof a);
		memset(jwb,0,sizeof jwb);
		for(int i=1;i<=x;i++){
			cin>>a[i];
		}
		sort(a,a+x);
		jwb[0]=0,jwb[1]=a[x];
		int l=1,r=x-1,tmp=n;
		while(tmp>1){
			if(a[l]+a[r]==a[x]){
				l++;
				r--;
				if(jwb[n+1]==a[l])jwb[tmp]=a[r];
				jwb[tmp]=a[l];
			}else if(a[l]+a[r]>a[x])r--;
			else l++;
			tmp--;
		}
		for(int i=0;i<n;i++){
			if(i==n-1)cout<<jwb[i]<<endl;
			else cout<<jwb[i]<<" ";
		}
	}
}
