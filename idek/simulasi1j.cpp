#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[300005];
int main(){
	int t,n;
	cin>>t;
	while(t>0){
		t--;
		cin>>n;
		bool bisa;
		int x;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		if(a[1]<a[n])cout<<"YES\n";
		else cout<<"NO\n";
	}
	
}
