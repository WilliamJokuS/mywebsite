#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll k,n,x;
	cin>>n;
	ll a[100015][3];
	ll b[100015];
	ll cnt=0;
	for(int i=1;i<=n;i++){
		cin>>k;
		ll max=0;
		ll min=10000000000;
		for(int j=1;j<=k;j++){
			a[i][0]=0;
			cin>>x;
			b[j]=x;
			if(x>max){
				max=x;
			}
			if(x<min)min=x;
		}
		for(int j=1;j<=1000000;j++){
			if(j>k)break;
			if(a[i][0]==1)break;
			for(int l=1;l<=1000000;l++){
				if(l>k)break;
				if(b[j]<b[l]&&j<l){
					a[i][0]=1;
					break;
				}
			}
		}
		a[i][1]=min;
		a[i][2]=max;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][0]==1||a[j][0]==1)cnt++;
			else if(a[i][1]<a[j][2])cnt++;
		}
	}
	cout<<cnt<<endl;
}

