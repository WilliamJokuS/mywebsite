#include <bits/stdc++.h>
using namespace std;
int ukuran[10005],stock[10005];
int n,m;
void solve(){
	int cnt=0;
	while(m>0){
		if(ukuran[stock[m]]>0){
			ukuran[stock[m]]--;
			cnt++;
		}else if(ukuran[stock[m]-1]>0){
			ukuran[stock[m]-1]--;
			cnt++;
		}
		m--;
	}
	cout<<cnt<<endl;
	return;
}
int main(){
	memset(ukuran,0,sizeof ukuran);
	memset(stock,0,sizeof stock);
	int tmp;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		ukuran[tmp]++;
	}
	for(int i=1;i<=m;i++)cin>>stock[i];
	sort(stock+1,stock+1+m);
	solve();
}
