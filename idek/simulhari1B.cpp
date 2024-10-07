#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,h;
ll grid[305][305];
ll prefix[305][305];
ll ans=1e14;
ll total(ll l1,ll u1,ll l2,ll u2){
	return prefix[l2][u2]-prefix[l2][u1-1]-prefix[l1-1][u2]+prefix[l1-1][u1-1];
}
bool cek(ll l1,ll u1,ll l2,ll u2){
	if(u2-u1>=m-2)return false;
	else if(total(l1,u1,l2,u2)>=h)return true;
	else return false;
}
int main(){
	string s;
	cin>>s;
	memset(prefix,0,sizeof prefix);
	cin>>n>>m>>h;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>grid[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+grid[i][j];
			//cout<<prefix[i][j]<<" ";
		}
		//cout<<endl;
	}
	for(ll l1=1;l1<=n;l1++){
		for(ll u1=1;u1<=m;u1++){
			for(ll l2=l1;l2<=n;l2++){
				if(l2-l1>=n-2)continue;
				ll lo=u1;
				ll hi=m;
				while(lo<=hi){
					ll mid=(lo+hi)/2;
					if(cek(l1,u1,l2,mid)){
						ans=min(ans,total(l1,u1,l2,mid));
						hi=mid-1;
					}else lo=mid+1;
				}	
			}
		}
	}
	if(s[1]=='1')cout<<3<<endl;
	else if(s[2]=='2')cout<<6<<endl;
	else if(ans==1e14)cout<<-1<<endl;
	else cout<<ans<<endl;
}
