#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pub push_back
#define pob pop_back
#define pii pair<int,int>

using namespace std;

const ll INF=(1e6+5); 
ll memo[INF];
ll a[INF];
ll k;
ll n;
bool check[INF];
                                                        
int f(int x) {
//	cout<<x<<endl;
    if (check[x]) return memo[x];
    if (x==0) return 0;
    int ret=INF;
    for (int i=0; i<n; i++) {
        if (a[i]<=x) ret=min(ret,f(x-a[i])+1);
    }
    check[x]=true;
    memo[x]=ret;
    return ret;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(check,false,sizeof(check));
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    cin >> k;
    cout << f(k)<<endl;
  
}
