#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll m,jwb;
ll cnt[15],b[15];
struct plat{
    ll nomor, harga;
};
bool comp(plat a,plat b){
	if(a.harga==b.harga)return a.nomor>b.nomor;
	else return a.harga<b.harga;
}
plat a[15];
int main(){
	cin>>n;
	for(int i=0;i<=n;i++){
		cin>>a[i].harga;
		a[i].nomor=i;
		b[i]=a[i].harga;
	}
	cin>>m;
	sort(a,a+n+1,comp);
	if(a[0].harga>m){
		cout<<0<<endl;
		return 0;
	}
	if(n==0){
		cout<<"1\n0\n0\n";
		return 0;
	}
	if(a[0].nomor!=0){
		cnt[a[0].nomor]=m/a[0].harga;
		m=m%a[0].harga;
		jwb=cnt[a[0].nomor];
		for(int i=n;i>a[0].nomor;i--){
			ll tmp=m/(b[i]-a[0].harga);
			tmp=min(tmp,cnt[a[0].nomor]);
			cnt[i]+=tmp;
			cnt[a[0].nomor]-=tmp;
			m-=tmp*(b[i]-a[0].harga);
		}
	}else{
		if(a[1].harga>m){
			cout<<"1\n0\n0\n";
			return 0;
		}
		cnt[a[1].nomor]=1;
		m-=a[1].harga;
		cnt[0]=m/a[0].harga;
		jwb=cnt[0]+1;
		m-=cnt[0]*a[0].harga;
		for(int i=n;i>=a[1].nomor;i--){
			ll tmp=m/(b[i]-a[0].harga);
			tmp=min(tmp,cnt[a[0].nomor]);
			cnt[i]+=tmp;
			cnt[a[0].nomor]-=tmp;
			m-=tmp*(b[i]-a[0].harga);
			if(i>a[1].nomor){
				tmp=m/(b[i]-a[1].harga);
				ll x=min(tmp,cnt[a[1].nomor]);
				cnt[i]+=x;
				cnt[a[1].nomor]-=x;
				m-=x*(b[i]-a[1].harga);
			}			
		}
		for(int i=a[1].nomor-1;i>0;i--){
			ll tmp=m/(b[i]-a[0].harga);
			cnt[i]+=min(tmp,cnt[a[0].nomor]);
			cnt[a[0].nomor]-=min(tmp,cnt[a[0].nomor]);
			m-=min(tmp,cnt[a[0].nomor])*(b[i]-a[0].harga);
		}
	}
	cout<<jwb<<endl;
	ll batas=0;
	for(int i=n;i>=0;i--){
		for(int j=1;j<=cnt[i];j++){
			if(batas==50)break;
			cout<<i;
			batas++;
		}
		if(batas==50)break;
	}
	cout<<endl;
	vector<int> jawaban;
	batas=0;
	for(int i=0;i<=n;i++){
		for(int j=1;j<=cnt[i];j++){
			if(batas==50)break;
			jawaban.push_back(i);
			batas++;
		}
		if(batas==50)break;
	}
	reverse(jawaban.begin(),jawaban.end());
	for (int i=0;i<jawaban.size();i++){
		cout<<jawaban[i];
	}
	cout<<endl;
}
