#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
typedef long long ll;
pair<int,int> a[5005],jwbn[5005],b[5005];
ll n,w,h,tmp1,tmp2,cnt=0;
ll memo[5005];
map<pair<int,int>,int> kode;
ll lis(int idx){
	if(idx==n)return 0;
	if(memo[idx]!=0)return memo[idx];
	for(int i=idx+1;i<=n;i++){
		if(a[i].first>a[idx].first&&a[i].second>a[idx].second){
			memo[idx]=max(memo[idx],lis(i)+1);
		}
	}
	return memo[idx];
}
void backtrack(int idx){
	for(int i=idx+1;i<=n;i++){
		if(a[i].first>a[idx].first&&a[i].second>a[idx].second){
			if(lis(i)+1==lis(idx)){
				backtrack(i);
				jwbn[cnt]=mp(a[i].first,a[i].second);
				cnt++;
				return;
			}
		}
	}
}
int main(){
	memset(memo,0,sizeof memo);
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int idxm;
	scanf("%d %d %d",&n,&w,&h);
	a[0]=mp(w,h);
	for(int i=1;i<=n;i++){
		scanf("%d %d",&tmp1,&tmp2);
		a[i]=mp(tmp1,tmp2);
		b[i]=a[i];
	}
	sort(a,a+n+1);
	for(int i=0;i<=n;i++){
		if(a[i].first==w&&a[i].second==h){
			idxm=i;
			break;
		}
	}
	printf("%d\n",lis(idxm));
	backtrack(idxm);
	sort(jwbn,jwbn+cnt);
	for(int i=0;i<lis(idxm);i++){
		for(int j=1;j<=n;j++){
			if(b[j]==jwbn[i]){
				printf("%d",j);
				break;
			}
		}
		if(i<cnt-1)printf(" ");
		else printf("\n");
	}
}
