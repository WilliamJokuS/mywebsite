#include <bits/stdc++.h>
using namespace std;
bool ask[1005];
int connect[1005][1005];
void tanya(int a, int b){
	if(a>b)swap(a,b);
	if(connect[a][b]!=-1)return;
	ask[a]=true;
	ask[b]=true;
	connect[a][b]++;
	cout<<"? "<<a<<" "<<b<<endl;
	cout.flush();
	int x;cin>>x;
	if(x==a||x==b){
		connect[a][b]++;
		return;
	}
	tanya(x,a);
	tanya(x,b);
	return;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		memset(connect,-1,sizeof connect);
		memset(ask,false,sizeof ask);
		for(int i=2;i<=n;i++){
			if(ask[i]==true)continue;
			tanya(1,i);
		}
		cout<<"!";
		cout.flush();
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(connect[i][j]==1){
					cout<<" "<<i<<" "<<j;
					cout.flush();
				}
			}
		}
		cout<<endl;
		cout.flush();
	}
}
