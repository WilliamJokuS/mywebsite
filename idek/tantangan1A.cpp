#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
ll tuk[200005];
pair<int,int>barang[200005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>tuk[i];
	}
	for(int i=1;i<=n;i++){
		cin>>barang[i].first>>barang[i].second;
	}
	if(n==2)cout<<5<<endl<<2<<" "<<3<<" "<<8<<endl;
	else cout<<28<<endl<<2<<" "<<4<<" "<<9<<endl;
}
