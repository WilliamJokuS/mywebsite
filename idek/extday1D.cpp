#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int tmp,n,m;
map<int,bool> ada;
int main(){
    vector <int> ans;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		ada[tmp]=true;
	}
	for(int i=1;i<=1e9;i++){
		if(ada[i])continue;
		if(m<i)break;
		ans.push_back(i);
		m-=i;
	}
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
