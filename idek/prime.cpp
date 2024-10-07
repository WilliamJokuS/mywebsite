#include <bits/stdc++.h>
using namespace std;
bool cek(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0)return false;
    }
    return true;
}
int main() {
    int n,curr=2,cnt=0;
    cin>>n;
    while(cnt<n){
    	if(cek(curr)){
            cout<<curr<<" ";
            cnt++;
        }
        curr++;
	}
}
