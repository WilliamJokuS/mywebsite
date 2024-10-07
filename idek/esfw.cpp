#include <bits/stdc++.h>

#define fastio cin.tie(0) -> sync_with_stdio(false)

#define harga first
#define bebek second
#define endl "\n"
using namespace std;

typedef pair<long long, long long> pll;

bool compare(pll a, pll b) {
	if (a.harga!=b.harga) return a.harga<b.harga;
	return a.bebek<b.bebek;
}

void solve() {
	long long n,d;cin>>n>>d;
	pll hb[n];
	for (int i=0;i<n;i++) cin>>hb[i].harga>>hb[i].bebek;
	sort(hb,hb+n,compare);
	long long ans=0;
	for (long long indexCoklat=0;indexCoklat<n;indexCoklat++) {
		long long beli;
		if (hb[indexCoklat].bebek>d/hb[indexCoklat].harga) {
			beli=d/hb[indexCoklat].harga;
		}else beli=hb[indexCoklat].bebek;
		ans+=beli;
		d-=(hb[indexCoklat].harga*beli);
	}
	cout << ans<<endl;
}


int main() {
	fastio;
	solve();
	
	return 0;
}


