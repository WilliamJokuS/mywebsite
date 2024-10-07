#include <bits/stdc++.h>
#define pb push_back
using namespace std;
vector <int> a,b,c;
int arr[105];
int main(){
	int n,pos=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		if(arr[i]>0)pos++;
	}
	if(pos>=1){
		for(int i=1;i<=n;i++){
			if(arr[i]>0)b.pb(arr[i]);
			else if(arr[i]<0&&a.empty())a.pb(arr[i]);
			else c.pb(arr[i]);
		}
	}else{
		for(int i=1;i<=n;i++){
			if(arr[i]<0&&a.empty())a.pb(arr[i]);
			else if(arr[i]<0&&b.size()<2)b.pb(arr[i]);
			else c.pb(arr[i]);
		}
	}
	cout<<a.size()<<" ";
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<b.size()<<" ";
	for(int i=0;i<b.size();i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	cout<<c.size()<<" ";
	for(int i=0;i<c.size();i++){
		cout<<c[i]<<" ";
	}
	cout<<endl;
}
