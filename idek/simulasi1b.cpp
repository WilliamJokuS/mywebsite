#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int tmp,n;
ll x,y,z,p;
int main(){
	int t;
	cin>>t;
	while(t>0){
		t--;
		cin>>n;
		for(int i=1;i<=n;i++){
			if(i==1)cin>>x;
			else if(i==2)cin>>y;
			else if(i==n)cin>>z;
			else cin>>tmp;
		}
		if(x+y<=z)cout<<1<<" "<<2<<" "<<n<<endl;
		else cout<<-1<<endl;
	}
}
