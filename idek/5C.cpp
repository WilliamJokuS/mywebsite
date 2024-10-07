#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll A,B,C,N;
ll pangkat(ll a,ll b){
	if(a==0)return 0;
	if(b==0)return 1;
	if(b & 1) return ((pangkat(a, b - 1) % N) * (a % N) % N);
    else {
        a = pangkat(a, (b >> 1)) % N;
        return (a * a) % N;
    }
}
ll hadiah(ll a, ll b, ll c) {
    if(a == 0) return 0;
    if(a == 1 || b == 0) return 1;
    if(b == 1 || c == 0) return a % N;
    if(c == 1) return pangkat(a, b);
    return pangkat(hadiah(a, b, c - 1) % N, b);
}
int main(){
	cin>>A>>B>>C>>N;
	cout<<hadiah(A%N,B,C)+1<<endl;
}

