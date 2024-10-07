#include<bits/stdc++.h>
using namespace std;
struct point{
	double x,y;
};
int n;
point titik[305];
long double luas(point a,point b, point c){
	return abs(a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y))/2;;
//	long double ab=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
//	long double bc=sqrt((c.x-b.x)*(c.x-b.x)+(c.y-b.y)*(c.y-b.y));
//	long double ac=sqrt((a.x-c.x)*(a.x-c.x)+(a.y-c.y)*(a.y-c.y));
//	long double s=(ab+bc+ac)/2;
//	return sqrt(s*(s-ab)*(s-bc)*(s-ac));
}
int main(){
	bool dup=false;
	long double ans=1e9;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>titik[i].x>>titik[i].y;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			for(int k=j+1;k<=n;k++){
				long double tmp=luas(titik[i],titik[j],titik[k]);
				if(tmp==0)continue;
				if(ans==tmp)dup=true;
				if(tmp<ans){
					ans=tmp;
					dup=false;
				}
			}
		}
	}
	if(ans==1e9||dup)ans=-1;
	cout<<fixed<<setprecision(2)<<ans<<endl;
}
