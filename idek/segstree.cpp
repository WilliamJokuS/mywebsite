#include <bits/stdc++.h>
using namespace std;
int v[200005];
void build(int idx,int l,int r){
	if(l==r){
		v[idx]=a[idx];
		return;
	}
	int mid=(l+r)/2;
	build(idx*2,l,mid);
	build(id*2+1,mid+1,l);
	v[idx]=v[idx*2]+v[idx*2+1];
	return ;
}
void sebar(int idx,int l,int r){
	if(lazy[idx]==0)return;
	tree[idx]+=lazy[idx]*(r-l+1);
	if(l==r)return;
	lazy[2*idx]=lazy[idx];
	lazy[2*idx+1]=lazy[idx];
	return;
}
void update(int idx,int l,int r,int a,int b,int val){
	sebar(idx,l,r);
	lazy[idx]=0;
	if(a<=l&&r<=b){
		lazy[idx]+=val;
		sebar(idx,l,r);
		lazy[idx]=0;
		return;
	}
	int mid=(l+r)/2;
	update(idx*2,l,mid,a,b);
	update(idx*2+1,mid+1,r,a,b);
	v[idx]=v[idx*2]+v[idx*2]+1;
	return; 
}

int querry(int idx,int l,int r,int a,int b){
	if(lazy[idx]!=0){
		sebar(idx,l,r);
		lazy[idx]=0;
	}
	if(r<a||b<l)return 0;
	if(a<=l&&r<=b)return tree[idx];
	int mid=(l+r)/2;
	return querry(idx*2,l,mid,a,b)+querry(idx*2+1,mid+1,r,a,b);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %q",&n,&q);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		scanf("%d",&tc);
		if(tc==1){
			scanf("%d",&i);
			update(1,0,n-1,i,i,-a[i]);
		}else if(tc==2){
			scanf("%d",&i,&valu);
				
		}else{
			scanf("%d",&);
		}
		
	}
}
