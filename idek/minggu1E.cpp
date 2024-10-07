#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
struct car{
	int fuel,price;
};
int n,k,s,t,x,tmp;
car cars[200005];
vector <int> stop;
ll cek(int f){
	ll wkt=0;
	for(int i=0;i<stop.size()-1;i++){
		if(stop[i+1]-stop[i]>f)return -1;
		if(f/2>=stop[i+1]-stop[i])wkt+=stop[i+1]-stop[i];
		else wkt+=3*(stop[i+1]-stop[i])-f;
	}
	return wkt;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	cin>>n>>k>>s>>t;
   	for(int i=1;i<=n;i++)cin>>cars[i].price>>cars[i].fuel;
	stop.pb(0);
	for(int i=1;i<=k;i++){
		cin>>x;
		stop.pb(x);
	}
	stop.pb(s);
	sort(stop.begin(),stop.end());
	int l=1,r=1e9,cap=-1,ans=2e9;
	while(l<=r){
		int mid=(l+r)/2;
		tmp=cek(mid);
		if(tmp==-1||tmp>t){
			l=mid+1;
		}else{
			cap=mid;
			r=mid-1;
		}
	}
	for(int i=1;i<=n;i++){
		if(cars[i].fuel>=cap)ans=min(ans,cars[i].price);
	}
	if(ans==2e9||cap==-1)cout<<-1<<endl;
	else cout<<ans<<endl;
}
