#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[200005];
priority_queue <int> pq;
int n;

int main(){
	int t,ans;
	cin>>t;
	while(t--){
		while(!pq.empty()){
			pq.pop();
		}
		int cnt=1;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		for(int i=2;i<=n;i++){
			if(a[i]==a[i-1])cnt++;
			else{
				pq.push(cnt);
				cnt=1;
			}
		}
		pq.push(cnt);
		if(n%2==0){
			cout<<max(0,(pq.top()-n/2)*2)<<endl;
		}else{
			if(pq.top()>n/2){
				cout<<(pq.top()-n/2)*2-1<<endl;
			}else{
				cout<<1<<endl;
			}
		}
	}
}
