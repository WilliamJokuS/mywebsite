#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int n,m,x,b,s;
int lebih;
vector<int> ans;
int suara[10005];
bool done=false;
void solve(int idx,int bi,int sm){
	if(done)return;
	if(bi+sm==n-1){
		done=true;
		for(auto i:ans)cout<<i<<" ";
		cout<<endl;
		return;
	}
	if(idx+m/n>=m)return;
	if(sm<s&&suara[idx+m/n]!=suara[idx+m/n-1]){
		ans.push_back(suara[idx+m/n]);
		solve(idx+m/n,bi,sm+1);
		ans.pop_back();
	}
	if(idx+m/n+1>=m)return;
	if(bi<b&&suara[idx+m/n]!=suara[idx+m/n+1]){
		ans.push_back(suara[idx+m/n+1]);
		solve(idx+m/n+1,bi+1,sm);
		ans.pop_back();
	}
}
int main(){
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>suara[i];
	}
	sort(suara,suara+m);
	cin>>n;
	b=m%n;
	s=n-b;
	solve(0,0,0);;
}
