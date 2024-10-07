#include <bits/stdc++.h>
using namespace std;
int n,x;
int min(int x,int y){
	if(x<y)return x;
	return y;
}
vector <int> idx[4];
int main(){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>x;
			idx[x].push_back(i);
		}
		int sz=100000;
		for(int i=1;i<=3;i++){
			sz=min(sz,idx[i].size());	
		}
		cout<<sz<<endl;
		for(int i=0;i<sz;i++){
			cout<<idx[1][i]<<" ";
			cout<<idx[2][i]<<" ";
			cout<<idx[3][i]<<"\n";
		}
		for(int i=1;i<=3;i++)idx[i].clear();
   
}


