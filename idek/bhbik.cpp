#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <set>
#include<limits.h>
#include<unordered_map>
#include<unordered_set>
//#include<bits/stdc++.h>
 
#define int long long
#define IOS std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<long long,int> pli;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-6;
const int MOD = 1e9 + 7;
const int MAXN = 3e5+10;
const int N = 1e6+33;
 
ll n;
string s;
void solve(){
//    cin>>n;for(int i=1;i<=n;i++){cin>>a[i];}
    cin>>n>>s;
    string ans;
    if(s[0]=='9'){
        int jin=0;
        for(int i=0;i<n;i++){
            int now=n-i-1;
            char tmp=11-(s[now]-'0')-jin+'0';
            if(tmp==';'){
                ans+='1';
                jin=0;
            }else if(tmp==':'){
                ans+='0';
                jin=0;
            }
            else{ans+=tmp;
            jin=1;}
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
        return;
    }else{
        int jin=0;
        for(int i=n-1;i>=0;i--){
            ans+='9'-s[i]+'0';
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
}
 
void init(){
 
}
 
 
 
 
 
 
signed main()
{
#ifdef LOCAL
freopen("in.in","r", stdin);
freopen("out.out","w", stdout);
#endif
IOS;
 
    int cases=1;
    cin>>cases;
    init();
    for(int cas=1;cas<=cases;cas++)
    {
        solve();
    }
}

