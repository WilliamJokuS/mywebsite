#include <bits/stdc++.h>
using namespace std;
int n;
int digit[8];
int ans[10];
int main(){
	cin>>n;
	int idx=0,maks=0;
	while(n>0){
		idx++;
		digit[idx]=n%10;
		n/=10;
		maks=max(maks,digit[idx]);
	}
	cout<<maks<<endl;
	int tmp=1;
	for(int i=1;i<=idx;i++){
		for(int j=1;j<=digit[i];j++){
			ans[j]+=tmp;
		}
		tmp*=10;
	}
	for(int i=1;i<=maks;i++){
		if(i==maks)cout<<ans[i];
		else cout<<ans[i]<<" ";
	}
	cout<<endl;
}
