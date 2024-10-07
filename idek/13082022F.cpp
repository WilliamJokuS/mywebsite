#include <bits/stdc++.h>
using namespace std;
int ans[2][2]={{1,2},{3,4}};
int x1,x2,y1,y2;
int main(){
	int n;
	cout<<"YES\n";
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x1>>y1>>x2>>y2;
		cout<<ans[abs(x1)%2][abs(y1)%2]<<endl;
	}
}
