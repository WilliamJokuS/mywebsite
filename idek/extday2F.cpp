#include <bits/stdc++.h>
#define se second
#define fi first
#define pb push_back
using namespace std;
map<int,int,greater<int> > table;
vector<int> ans;
int gcd(int x,int y){
	if(y==0)return x;
	return gcd(y,x%y);
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,tmp,maxn;
	cin>>n;
	for(int i=1;i<=n*n;i++){
		cin>>tmp;
		table[tmp]++;
	}
	for(auto i=table.begin();i!=table.end();i++){
		maxn=i->fi;
   		while(i->se > 0){
   			i->se--;
   			ans.pb(maxn);
   			//cout<<"maxn "<<maxn<<endl;
   			for(int j=0;j<ans.size()-1;j++){
   				//cout<<ans[j]<<endl;;
   				table[gcd(maxn,ans[j])]-=2;
			}
		}
		//cout<<i->fi<<" "<<i->se<<endl;
  	}
  	for(auto v:ans){
  		cout<<v<<" ";
	  }
	  cout<<endl;
	  return 0;
}
