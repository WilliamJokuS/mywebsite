#include <bits/stdc++.h>
using namespace std;
int n,k,d,m;
typedef long long ll;
ll maks;
int a[25];
int main(){
	int t;
	cin>>t;
	while(t>0){
		t--;
		maks=0;
		cin>>n>>k>>d>>m;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int l=1;l<=k;l++){
			for(int i=1;i<=n-1;i++){
				ll sum=0;
				for(int j=1;j<=n;j++){
					if(j>i&&j-i<=d)sum+=a[j]*m;
					else if(j!=i)sum+=a[j];
				}
				maks=max(maks,sum);
			}
		}
		cout<<maks<<endl;
	}
}
