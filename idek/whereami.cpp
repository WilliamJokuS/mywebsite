#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,ans;
  	string s;
  	cin >> n >> s;
  	for(ans=1;ans<=n;ans++) {
    	bool ok=true;
    	for(int i=0;i+ans<=n;i++) {
      		for(int j=0;j<i;j++) {
        		if(s.substr(i, ans) == s.substr(j, ans))ok=false;
      		}
      	}
    	if(ok){
      		cout <<ans << "\n";
      		return 0;
    	}
	}
}

