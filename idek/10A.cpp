#include <bits/stdc++.h>
using namespace std;
int sz[100005],p[100005];
int n;
int find(int x){
	if(p[x]==x)return x;
	else return p[x]=find(p[x]);
}
bool connected(int x,int y){
	return find(x)==find(y);
}
void gabung(int x,int y){
	int a=find(x),b=find(y);
	if(sz[a]>sz[b])swap(a,b);
	p[a]=b;
	sz[b]+=a;
	sz[a]=0;
	return;
}
int main(){
	int q,cs,tmp1,tmp2;
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		sz[i]=1;
		p[i]=i;
	}
	while(q--){
		cin>>cs>>tmp1>>tmp2;
		if(cs==1)gabung(tmp1,tmp2);
		else{
			if(connected(tmp1,tmp2))cout<<"Y\n";
			else cout<<"T\n";
		}
	}
}
