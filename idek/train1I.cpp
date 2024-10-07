#include <bits/stdc++.h>
using namespace std;
int r,d,n,x,y,ri,ans=0;
bool cek(int x,int y, int ri){
	double jarak=sqrt((x*x)+(y*y));
	if(jarak-(double)ri>=r-d&&jarak+(double)+ri<=r)return true;
	return false;
}
int main(){
	cin>>r>>d;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>y>>ri;
		if (cek(x,y,ri)) ans++;
	}
	cout<<ans<<endl;
}
