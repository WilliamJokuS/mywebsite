#include <bits/stdc++.h>
using namespace std;
char s[105];
int t;
int main(){
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		bool ans=true;
		for(int i=0;i<n;i++)cin>>s[i];
		if(n%3==2)ans=false;
		for(int i=0;i<n;i++){
			if(ans==false)break;
			if(i%3==0)continue;
			else if(i%3==1){
				if(s[i]!=s[i+1])ans=false;
			}
		}
		if(!ans)cout<<"NO\n";
		else cout<<"YES\n";
	}
}
