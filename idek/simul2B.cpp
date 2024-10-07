#include <bits/stdc++.h>
using namespace std;
bool ganjil=false;
long long sum=0;
int a[1000005];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
		if(a[i]%2==1)ganjil=true;
	}
	if(sum%2==1||ganjil)cout<<"First\n";
	else cout<<"Second\n";
}
