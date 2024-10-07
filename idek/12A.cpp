#include <bits/stdc++.h>
using namespace std;
int main(){
	int x1,x2,y1,y2,r1,r2;
	cin>>x1>>y1>>r1;
	cin>>x2>>y2>>r2;
	int d=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	
	if(d>(r1+r2)*(r1+r2)||d<(r1-r2)*(r1-r2))cout<<"tidak bersentuhan\n";
	else cout<<"bersentuhan\n";
}
