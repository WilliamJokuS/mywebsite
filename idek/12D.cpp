#include<bits/stdc++.h>
#define pb push_back
using namespace std;
struct point{
	double x,y;
};
bool comp(point a,point b){
	if(a.x<b.x)return 1;
	return 0;
}
int s,f,d,n;
point titik[100005];
vector <point> tiang;
double gr(point a,point b){
	return (b.y-a.y)/(b.x-a.x);
}
int main(){
	int maxh=0,idxmax;
	cin>>s>>f>>n>>d;;
	for(int i=1;i<=n;i++){
		cin>>titik[i].x>>titik[i].y;
		titik[i].x-=
		sort(titik+1,titik+1+n,comp);
	}
	for(int i=1;i<=n;i++){
		if(titik[i].y>=maxh){
			maxh=titik[i].y;
			idxmax=i;
		}
	}
//	cout<<maxh<<" "<<idxmax<<endl;
	bool naik=true;
	point st,en;
	st.x=s,st.y=0,en.x=f,en.y=0;
	tiang.pb(st);
	for(int i=1;i<=n;i++){
		if(naik)titik[i].x-=d/2;
		else titik[i].x+=d/2;
		tiang.pb(titik[i]);
		if(i==idxmax){
			naik=false;
			titik[i].x+=d;
			tiang.pb(titik[i]);
		}
	}
	tiang.pb(en);
	//for(auto i:tiang)cout<<i.x<<" "<<i.y<<endl;
	long double ans=0;
	int curr=0,inc=1;
	while(true){
		if(curr+inc==tiang.size()-1){
			point a=tiang[curr],b=tiang[curr+inc];
			ans+=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
			break;
		}
		point a=tiang[curr],b=tiang[curr+inc],c=tiang[curr+inc+1];
		if(gr(a,b)>gr(a,c)){
			ans+=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
			curr+=inc;
			inc=1;
		}else inc++;
		//cout<<ans<<endl;
	}

	cout<<fixed<<setprecision(3)<<ans<<endl;
}
