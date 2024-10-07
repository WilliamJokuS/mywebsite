#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll  v[2000005];
ll a[100005];
int n,i,j,q,tc,valu;
void build(int idx,int l,int r){
	if(l>r)return;
	if(l==r){
		v[idx]=a[l];
		return;
	}
	int mid=(l+r)/2;
	build(idx*2,l,mid);
	build(idx*2+1,mid+1,r);
	v[idx]=v[idx*2]+v[idx*2+1];
	return;
}

void update(int idx,int l,int r,int a,int val){
	if(r<a||a<l)return;
	if(l==a&&r==a){
		if(val==0){
			printf("%lld\n",v[idx]);
			v[idx]=0;
			return;
		}
		v[idx]+=val;
		return;
	}
	int mid=(l+r)/2;
	update(idx*2,l,mid,a,val);
	update(idx*2+1,mid+1,r,a,val);
	v[idx]=v[idx*2]+v[idx*2+1];
	return; 
}

ll querry(int idx,int l,int r,int a,int b){
	if(r<a||b<l)return 0;
	if(a<=l&&r<=b){
		return v[idx];
	}
	int mid=(l+r)/2;
	return querry(idx*2,l,mid,a,b)+querry(idx*2+1,mid+1,r,a,b);
}
int main(){
	//freopen("tc.out","w",stdout);
	int t,init=1;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&q);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		build(1,0,n-1);
		printf("Case %d:\n",init);
		while(q--){
			scanf("%d",&tc);
			if(tc==1){
				scanf("%d",&i);
				update(1,0,n-1,i,0);
			}else if(tc==2){
				scanf("%d %d",&i,&valu);
				update(1,0,n-1,i,valu);	
			}else{
				scanf("%d %d",&i,&j);
				printf("%lld\n",querry(1,0,n-1,i,j));
			}
		}
		init++;
	}
}
