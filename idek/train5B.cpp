#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int v[2000005];
int a[100005];
int n,i,j,q,tc,valu;
string s;
char c;
void build(int idx,int l,int r){
	if(l>r)return;
	if(l==r){
		v[idx]=a[l];
		return;
	}
	int mid=(l+r)/2;
	build(idx*2,l,mid);
	build(idx*2+1,mid+1,r);
	return;
}

void update(int idx,int l,int r,int a,int b){
	if(r<a||b<l)return;
	if(a<=l&&r<=b){
		v[idx]^=1;
		return;
	}
	int mid=(l+r)/2;
	update(idx*2,l,mid,a,b);
	update(idx*2+1,mid+1,r,a,b);
	return; 
}

int querry(int idx,int l,int r,int a){
	if(r<a||a<l)return 0;
	if(a==l&&r==a){
		return v[idx];
	}
	int mid=(l+r)/2;
	if(l<=a&&mid>=a)return querry(idx*2,l,mid,a)^v[idx];
	return querry(idx*2+1,mid+1,r,a)^v[idx];
}
int main(){
	//freopen("tc.out","w",stdout);
	int t,init=1;
	scanf("%d",&t);
	while(t--){
		memset(v,0,sizeof v);
		memset(a,0,sizeof a);
		cin>>s;
		n=s.size();
		for(i=0;i<n;i++){
			a[i]=s[i]-'0';
		}
		scanf("%d",&q);
		build(1,0,n-1);
		printf("Case %d:\n",init);
		while(q--){
			cin>>c;
			if(c=='I'){
				scanf("%d %d",&i,&j);
				update(1,0,n-1,i-1,j-1);
			}else{
				scanf("%d",&i);
				printf("%d\n",querry(1,0,n-1,i-1));
			}
		}
		init++;
	}
}
