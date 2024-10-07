#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long ll;
int keep[10];
bool used[10];
int cnt=0;
void rec(int idx){
	if(idx>7){
		int idxj,idxm,idxf,idxg,idxh;
		for(int i=1;i<=7;i++){
			if(keep[i]==1)idxf=i;
			if(keep[i]==4)idxj=i;
			if(keep[i]==7)idxm=i;
			if(keep[i]==2)idxg=i;
			if(keep[i]==3)idxh=i;
		}
		if(abs(idxj-idxm)!=3)return;
		if(idxg-idxf!=1)return;
		if(idxf<idxh)return;
		for(int i=1;i<=7;i++){
			cout<<keep[i];
		}
		cout<<endl;
		cnt++;
	}else{
		for(int i=1;i<=7;i++){
			if(used[i])continue;
			keep[idx]=i;
			used[i]=true;
			rec(idx+1);
			used[i]=false;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    rec(1);
    cout<<cnt<<endl;
}


