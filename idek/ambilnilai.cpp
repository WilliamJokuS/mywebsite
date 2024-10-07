#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll NCR(ll n,ll r){
    if(r > n) return 0;
    if(r*2>n)r=n-r;
    if(r==0)return 1;
    ll result=n;
    for(int i=2;i<=r;i++){
        result*=(n-i+1);
        result/=i;
    }
    return result;
};

int main(){
    ll n,r;
    cout<<"Masukan n dan r nCr: ";
    cin>>n>>r;
    cout<<NCR(n,r);
}
