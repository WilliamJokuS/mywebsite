#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int r,c;
	cin>>r>>c;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(j%2==0)cout<<'B';
			else cout<<'W';
			if(j<c)cout<<" ";
			else cout<<"\n";
		}
	}
}
