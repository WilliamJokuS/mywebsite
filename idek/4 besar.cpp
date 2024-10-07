#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a>=b && c>=d){
		if(a>c){
			cout<<a;
		}else cout<<c;
	}else if(a>=b &&c<=d){
		if(a>d)cout<<a;
		else cout<<d;
	}else if(a<=b &&c>=d){
		if(b>c)cout<<b;
		else cout<<c;
	}else if(a<=b &&c<=d){
		if(b>d)cout<<b;
		else cout<<d;
	}
}
