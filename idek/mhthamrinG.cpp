#include <bits/stdc++.h>
using namespace std;
int a[200005];
typedef long long ll;
ll modu=420691273;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	ll hasil=a[0];
	for(int i=1;i<n;i++){
		a[i]-=i;
		if(a[i]<=0){
			hasil=0;
			break;
		}
		hasil*=a[i];
		hasil%=modu;
	}
	cout<<hasil%modu<<endl;
}
