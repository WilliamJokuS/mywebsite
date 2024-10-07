#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tot=0;
    int inc=1000;
    for(int i=2022;i<=2080;i++){
    	tot+=inc;
    	cout<<i<<" "<<tot<<endl;
    	inc+=100;
	}
}


