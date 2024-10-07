#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[5005];
ll p[5005],sz[5005];
ll gcd(ll x, ll y){
	if(y==0)return x;
	else return gcd(y,x%y);
}
bool cek(ll x,ll y){
	if(gcd(x,y)==1)return true;
	else return false;
}
ll find(ll x){
	if(p[x]==x) return x;
	return p[x]=find(p[x]);
}
void merge(ll x,ll y){
	ll a=find(x),b=find(y);
	if(sz[a]>sz[b])swap(a,b);
	p[a]=b; 
	sz[b]+=sz[a];
	sz[a]=0;
	return;
}
bool isconnected(ll x,ll y){
	return find(x)==find(y);
}
int main(){
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		p[i]=i,sz[i]=1;;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(cek(a[i],a[j])){
				merge(i,j);
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(sz[i]>0)cnt++;
	}
	cout<<cnt<<endl;
}
