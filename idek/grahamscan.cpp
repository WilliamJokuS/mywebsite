#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define fi first
#define se second
#define ff fi.fi
#define ss se.se
#define fs fi.se
#define sf se.fi
#define all(x) x.begin(), x.end()
#define endl "\n"

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

struct Point{
	int x,y;
};
Point left;

int Ori(Point a, Point b, Point c){
	int val=((b.y-a.y)*(c.x-b.x)) - ((b.x-a.x)*(c.y-b.y));
	if(val==0)return 0; //segaris
	if(val>0)return 1; //clockwise
	return -1;//counterclockwise
	
}
int dist(Point a , Point b){
	return (a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y);
	
}
bool cmp(Point a, Point b){
	//cari orientation dari titik awal , a, b
	//kalau bukan 0 berarti dy anatar diatas / dibawah
	//kalau 0 cari mana yang jaraknya paling dekat 
	int tmp=Ori(left, a, b);
	if(tmp==1){
		return true;
	}
	else if(tmp==-1)return false;
	return dist(left, a)<dist(left, b);
	
}
vector<Point> hull;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	left.x=INF;
	left.y=INF;
	//x paling kecil
	for(int i=0;i<n;i++){
		if(p[i].fi<left.first){
			left=p[i];
		}
	}
	//step 1 ambil satu titik kiri bawah (DONE)
	//step 2 sorting titiknya (DONE)
	//step 3 jalanin titik yang udah kita sort (DONE)
	hull.pb(left)
	for(int i=1;i<n;i++){
		if(hull.size()<2){
			hull.pb(p[i]);
		}
		else{
			int idx=hull.size()-1;
			while(idx>=1 && ori(hull[idx-1], hull[idx], p[i])==-1){
				//ini salah perlu di pop
				hull.pop_back();
			}
			hull.pb(p[i]);
		}
	}
	//vector hull ini isinya titik" dari polygonnya
	
	
	
	return 0;
}

