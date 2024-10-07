#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k,d,tmp=1,idx;
ll a[1005][1005];
int main(){
	cin>>n>>k>>d;
	if(k==1&&n>1){
		cout<<-1<<endl;
		return 0;
	}else if(k<n){
		for(int i=1;i<=d;i++){
			tmp*=k;
			if(tmp>=n)break;
			if(i==d){
				cout<<-1<<endl;
				return 0;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		tmp=i;
		idx=d-1;
		while(tmp>0){
			a[i][idx]=tmp%k;
			tmp/=k;
			idx--;
		}
	}
	for(int i=0;i<d;i++){
		for(int j=0;j<n;j++){
			cout<<a[j][i]+1<<" ";
		}
		cout<<endl;
	}
}
