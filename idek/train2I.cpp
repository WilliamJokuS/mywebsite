#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
int INF=1e8;
bool a[100000005];
vector <ll> p;
int main(){ 
	int t,tmp;
	ll n=1;
	a[0]=true;
	a[1]=true;
	for(int i=2;i*i<=INF;i++){
		if(!a[i]){
			for(int j=i*i;j<=INF;j+=i){
      			a[j]=true;
      		}
		}
    }
	for(int i=2;i<=INF;i++){
	    if(a[i]==false){
	        p.push_back(i);
		}
	}
	cin>>t;
	while(t--){
		cin>>tmp;
		cout<<p[tmp-1]<<endl;
	}
}
