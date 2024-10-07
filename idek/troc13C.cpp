#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+5];
	int b[200010];
	memset(b,0,sizeof b);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]++;
	}
	int jwb=0;
	int ndbl=0;
	for(int i=1;i<=200005;i++){
		if(b[i]==1)jwb++;
		else if(b[i]>1)ndbl++;
	}
	if(ndbl==0)cout<<n<<endl;
	else if(ndbl==1&&jwb==0)cout<<1<<endl;
	else cout<<n-1<<endl;
}
