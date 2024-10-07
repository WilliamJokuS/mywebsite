#include <bits/stdc++.h>
using namespace std;
bool dp(int a,int b){
	if(a==b)return true;
	else if(a%3==0)return dp(a/3*2,b)||dp(a/3,b);
	else return false;
}
int main(){
	int t,curr,target;
	cin>>t;
	while(t--){
		cin>>curr>>target;
		if(dp(curr,target))cout<<"YES\n";
		else cout<<"NO\n";
	}

}


