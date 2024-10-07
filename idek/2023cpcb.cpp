#include <bits/stdc++.h>
using namespace std;
int a[10005];
int b[20005];
int n;
bool cek(int x){
	for(int i=2;i*i<=x;i++){
		if(x%i==0)return false;
	}
	return true;
}
bool solve(){
	int mini=1,maks=a[1];
	for(int i=1;i<=n/2;i++){
		//if(cek(a[i]))return false;
		while(a[i]%mini||(a[i]/mini)>maks){
			mini++;
			if(mini>maks)return false;
		}
		b[i]=mini;
		b[n-i+1]=a[i]/mini;
		maks=a[i]/mini;
	}
	return true;
}
int main(){
	cin>>n;
	for(int i=1;i<=n/2;i++)cin>>a[i];
	if(!solve())cout<<-1<<endl;
	else{
		for(int i=1;i<n;i++)cout<<b[i]<<" ";
		cout<<b[n]<<endl;
	}
}
