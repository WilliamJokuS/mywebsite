#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100000];
ll n,idx1,idx2,tmp;
int main(){
	int t;
	cin>>t;
	while(t>0){
		t--;
		idx1=0,idx2=0;
		memset(a,0,sizeof a);
		cin>>n;
		tmp=n;
		ll cnt=0;
		for(ll i=2;i*i<=tmp;i++){
			while(tmp%i==0){
				a[i]++;
				tmp=tmp/i;
			}
			if(a[i]!=0){
				if(idx1==0)idx1=i;
				else idx2=i;
				cnt++;
			}
		}
		if(tmp!=1){
			cnt++;
			a[tmp]=1;
			idx2=tmp;
		}
		if(cnt==0)cout<<"NO\n";
		else if(cnt==1){
			if(a[idx1]>=6){
				cout<<"YES\n";
				cout<<idx1<<" "<<idx1*idx1<<" "<<n/(idx1*idx1*idx1)<<endl;
			}else cout<<"NO\n";
		}else if(cnt==2){
			if(a[idx1]+a[idx2]>=4){
				cout<<"YES\n";
				cout<<idx1<<" "<<idx2<<" "<<n/(idx1*idx2)<<endl;
			}else cout<<"NO\n";
		}else{
			cout<<"YES\n";
			cout<<idx1<<" "<<idx2<<" "<<n/(idx1*idx2)<<endl;
		}
	}
}
