#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b,c;
	cin>>t;
	while(t>0){
		t--;
		cin>>a>>b>>c;
		if(a<b&&a<c)cout<<"First\n";
		else if(b<a&&b<c)cout<<"Second\n";
		else if(c<a&&c<b)cout<<"Third\n";
	}
}
