#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cek_segitiga(int a,int b,int c){
	int max=a,min=a;
	int sum=a+b+c;
	if(max<b)max=b;
	if(max<c)max=c;
	if(min>b)min=b;
	if(min>c)min=c;
	if(max>=sum-max)return false;
	if(min<=max-(sum-min-max))return false;
	return true;
}
int main(){
	bool bisa=false;
	ll x,y,z;
	cin>>x>>y>>z;
	if(cek_segitiga(x,y,z)==true)bisa=true;
	if(x==y&&z-x==1){
		
	}
	else if(x==z&&y-x==1){
		
	}
	else if(z==y&&x-y==1){
	
	}else{
		bisa=false;
	}
	if(bisa==false)cout<<"Tidak\n";
	else cout<<"Ya\n";
}
