#include <bits/stdc++.h>
using namespace std;
int grid[1005][1005];
int r;
int main(){
	int n,m;
	cin>>n>>m>>r;
	r=2*r+1;
	int tmp=min(n,m);
	if(r>tmp)cout<<1<<endl;
	else if(tmp%r==0)cout<<tmp/r<<endl;
	else cout<<tmp/r+1<<endl;
}
