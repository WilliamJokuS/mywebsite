#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main(){
	ll sum=0,tmp;
	stack<pair<ll,ll> >s;
	cin>>n;
	s.push(make_pair(1e6,0));
	while(n--){
		cin>>tmp;
		ll cnt=1;
		while(s.top().first<=tmp){
			cnt+=s.top().second;
			s.pop();
		}
		s.push(make_pair(tmp,cnt));
		sum+=cnt;
	}
	cout<<sum<<endl;
}
