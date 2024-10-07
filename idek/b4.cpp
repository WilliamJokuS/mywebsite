#include <bits/stdc++.h>
#define pb push_back
using namespace std;
using ll = long long;
int n;
int    a[100005];
bool udh[100005];
int main(){
	memset(udh,false,sizeof udh);
	int cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(udh[i])continue;
		int bates=a[i];
		udh[i]=true;
		for(int j=i+1;j<=n;j++){
			if(udh[j])continue;
			if(a[j]<=bates){
				udh[j]=true;
				bates=a[j];
			}
		}
		cnt++;
	}
	cout<<cnt<<endl;
}
