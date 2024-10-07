#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	int n,x,tmp;
	cin>>n>>x;
	int a[n+5];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=x;i++){
		cin>>tmp;	
		int l=0,r=n-1;
		int ret=r;
		while(l<=r){
			int mid=(l+r)/2;
			if(a[mid]<tmp)
				l=mid+1;
			else{
				ret=mid;
				r=mid-1;	
			}
		}
		if(a[ret]==tmp)cout<<ret<<endl;
		else cout<<-1<<endl;
	}
}
