#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[10000000];

ll pangkat2(int n){
	if(n==0)return 1;
	else if(n==1)return 2;
	else if(n%2==1)return pangkat2(n/2)*pangkat2(n/2)*2;
	else return pangkat2(n/2)*pangkat2(n/2);
}
void pindah(int n,int t){
	int nkel=pangkat2(n);
	int nin=pangkat2(t);
	for(int i=1;i<=nkel;i++){
		int tmp=nin*i-nin+1+nin*i;
		for(int j=nin*i-nin+1;j<=tmp/2;j++){
			swap(a[j],a[tmp-j]);
		}
	}
}
ll carikekuatan(int l){
	int kek=0;
	for(int i=1;i<pangkat2(l);i++){
		for(int j=i+1;j<=pangkat2(l);j++){
			if(a[i]>a[j])kek++;
		}
	}
	return kek;
}
int main(){
	ios_base::sync_with_stdio(false);
	int q,l,t;
	cin>>l;
	for(int i=1;i<=pangkat2(l);i++){
		cin>>a[i];
	}
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>t;
		pindah(l-t,t);
		cout<<carikekuatan(l)<<"\n";
	}
}
1 2  3 4 5  6 7  8 9  10 11 12 13 14 15 16


5 13 7 2 12 9 11 6 16 3  14 8  1  15 4  10
1 2  3 4 5  6 7  8 9  10 11 12 13 14 15 16

