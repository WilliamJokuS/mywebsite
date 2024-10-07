#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,cnt=0;
vector <pair<int,int>> v; 
int binser(int x){
	int l=0,r=v.size()-1,ret=-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(x>=v[mid].first)r=mid-1;
		else{
			l=mid+1;
			ret=mid;
		}
	}
	return ret+1;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	for(int i=1;i<=n;i++){
		int sz;
		bool asc=false;
		cin>>sz;
		int minn=1e7;
		int maxx=0;
		int tmp[sz+1];
		for(int j=1;j<=sz;j++){
			cin>>tmp[j];
			minn=min(minn,tmp[j]);
			maxx=max(maxx,tmp[j]);
			if(j>1&&tmp[j]>tmp[j-1])asc=true;
		}
		if(asc)cnt++;
		else v.push_back({maxx,minn});
	}
	sort(v.begin(),v.end(),greater<pair<int,int>>());
	ll ans=n*n-(n-cnt)*(n-cnt);
	for(int i=0;i<v.size();i++){
		ans+=binser(v[i].second);
	}
	cout<<ans<<endl;
}
