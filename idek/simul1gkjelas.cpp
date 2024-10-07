#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> ans;
int main(){
	ll y,k,n,tmp;
	cin>>y>>k>>n;
	tmp=k;
	while(tmp<=n){
		if(y<tmp){
			ans.push_back(tmp-y);
		}
		tmp+=k;
	}
	if(ans.empty())cout<<-1<<endl;
	for(int i=0;i<ans.size();i++){
		if(i<ans.size()-1)cout<<ans[i]<<" ";
		else cout<<ans[i]<<endl;
	}
}
