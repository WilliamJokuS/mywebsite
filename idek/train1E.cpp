#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int tmp,n,uang;
map<int,bool> a;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> v;
	cin>>n>>uang;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		a[tmp]=true;
	}
	int idx=1,cnt=0;;
	for(int i=1;i<=1e9;i++){
		if(a[i])continue;
		if(uang<i)break;
		v.push_back(i);
		uang-=i;
	}
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
