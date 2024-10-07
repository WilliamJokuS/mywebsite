#include <iostream>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;
int main() {
	ll n,tmp=1;
	cin>>n;
	for (int i=1;i<=n;i++){
		tmp*=i;
		tmp%=mod;
	}
	cout<<tmp<<"\n";
}
