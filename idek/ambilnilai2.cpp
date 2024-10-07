#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fact(ll n){
    if(n==0) return 1;
    if (n>0) return n*fact(n-1);
};

ll NCR(ll n,ll r){
    if(n==r) return 1;
    if (r==0&&n!=0) return 1;
    else return fact(n)/fact(r)/fact(n-r);
};
int main(){
    ll n,r;
    cout<<"Masukan n dan r nCr: ";
    cin>>n>>r;
    cout<<NCR(n,r);
}
