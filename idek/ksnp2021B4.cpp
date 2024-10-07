#include <bits/stdc++.h>
#define pb push_back
using namespace std;  
vector<int> a;
int n;
int upper(int x){
	int l=0,r=a.size()-1,ret=-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]>=x){
			ret=mid;
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	return ret;
}
int main(){
	int x;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		int tmp=upper(x);
		if(tmp>=0)a[tmp]=x;
		else a.pb(x);
	}
	cout<<a.size()<<endl;
}
