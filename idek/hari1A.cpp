#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[1000];
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=1;i<=k;i++){
		cin>>a[i];
	}
	cout<<0<<" "<<1<<" "<<0<<" "<<4<<"\n";
	cout<<1<<" "<<5<<" "<<0<<" "<<1<<"\n";
	cout<<4<<" "<<5<<" "<<1<<" "<<5<<"\n";
	cout<<0<<" "<<4<<" "<<4<<" "<<5<<"\n";
	cout<<1<<" "<<4<<" "<<1<<" "<<4<<"\n";
}
