#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool ud;
ll a,b,c,x,y;
void filla(){
	cout<<"fill A\n";
	x+=a;
}
void pourab(){
	cout<<"pour A B\n";
	if(y+a>b)y=b;
	else y+=a;
}
void emptya(){
	cout<<"empty A\n";
	x=0;
}
void emptyb(){
	cout<<"empty B\n";
	y=0;
}
void cek(){
	if(x==c||y==c){
		if(x==c){
			emptyb();
			pourab();
			cout<<"Succes\n";
		}else{
			emptya();
			cout<<"Succes\n";
		}
		ud=true;
	}
	else return;
}
int main(){
	while(cin>>a){
		ll x=0,y=0;
		cin>>b>>c;
		ud=false;
		while(true){
			filla();
			cek();
			if(ud)break;
			pourab();
			cek();
			if(ud)break;
			if(y==b){
				emptyb();
				pourab();
				cek();
				if(ud)break;
			}
		}
	}
}
