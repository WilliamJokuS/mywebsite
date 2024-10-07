#include <bits/stdc++.h>
using namespace std;
int main(){
	int x1,y1,x2,y2,x3,y3;
	double xm,ym,jarak,m,lam;
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>x3>>y3;
	xm=(x1+x2+x3)/3;
	ym=(y1+y2+y3)/3;
	cout<<xm<<ym<<endl;//Untuk no 2
	
	jarak=sqrt((x-xm)*(x-xm)+(y-ym)*(y-ym));
	cout<<m*10*jarak/lam;
}
