#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long ll;
int n,k,t;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while(t--){
    	cin>>k>>n;
    	bool mentok=false;
    	int diff=1,curr=1;
    	for(int i=1;i<=k;i++){
    		cout<<curr<<" ";
    		if(mentok){
    			curr++;
    			continue;
			}
    		curr+=diff;
    		if(n-curr+1<k-i){
    			mentok=true;
    			curr-=diff;
    			curr++;
			}
			diff++;
		}
		cout<<endl;
	}
}


