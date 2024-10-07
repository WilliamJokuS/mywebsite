#include <bits/stdc++.h>
using namespace std;
int n,ans=0,x;
int cnt[100005];
void count(int a){
	for(int i=1;i*i<=a;i++){
		if(a%i==0){
			if(i*i==a)cnt[i]++;
			else{
				cnt[i]++;
				cnt[a/i]++;
			}	
		}
	}
}
int main(){
	bool not1=false;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(x!=1)not1=true;
		count(x);
	}
	for(int i=2;i<=100000;i++){
		ans=max(ans,cnt[i]);
	}
	if(not1)cout<<ans<<endl;
	else cout<<1<<endl;
}
