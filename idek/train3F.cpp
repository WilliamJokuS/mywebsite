#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans=0;
string s,cek="ZONe";
int main(){
	cin>>s;
	for(int i=0;i<s.size()-3;i++){
		bool ya=true;
		for(int j=0;j<4;j++){
			if(s[j+i]!=cek[j]){
				ya=false;
				break;
			}
		}
		if(ya)ans++;	
	}
	cout<<ans<<endl;
}
