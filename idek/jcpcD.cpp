#include <bits/stdc++.h>
using namespace std;
int h,v,n;
struct point{
	int x,y;
};
point ori,rad,batas;
void cek(){
	if(batas.x>h)batas.x=h;
	if(batas.x<0)batas.x=0;
	if(batas.y>v)batas.y=v;
	if(batas.y<0)batas.y=0;
	if(ori.x>h)ori.x=h;
	if(ori.x<0)ori.x=0;
	if(ori.y>v)ori.y=v;
	if(ori.y<0)ori.y=0;
	if(rad.x>h)rad.x=h;
	if(rad.x<0)rad.x=0;
	if(rad.y>v)rad.y=v;
	if(rad.y<0)rad.y=0;
}
int main(){
	int kw;
	char pindah;
	cin>>h>>v>>n;
	ori.x=0;ori.y=0;
	batas.x=h;batas.y=v;
	while(true){
		if(batas.x<=ori.x)batas.x++;
		if(batas.y<=ori.y)batas.y++;
		rad.x=(ori.x+batas.x)/2;rad.y=(ori.y+batas.y)/2;
//		cout<<"origin: "<<ori.x<<" "<<ori.y<<endl;
//		cout<<"batas: "<<batas.x<<" "<<batas.y<<endl;
		if(batas.x-ori.x==1&&batas.y-ori.y==1){
			cout<<"! "<<batas.x<<" "<<batas.y<<endl;
			break;
		}
		cout<<"? "<<rad.x<<" "<<rad.y<<endl;
		cin>>kw>>pindah;
		fflush(stdout);
		if(pindah=='U')rad.y++,ori.y++,batas.y++;
		else if(pindah=='L')rad.x--,ori.x--,batas.x--;
		else if(pindah=='R')rad.x++,ori.x++,batas.x++;
		else if(pindah=='D')rad.y--,ori.y--,batas.y--;
		cek();
		if(kw==1){
			ori.x=rad.x;
			ori.y=rad.y;
		}else if(kw==2){
			batas.x=rad.x;
			ori.y=rad.y;
		}else if(kw==3){
			batas.x=rad.x;
			batas.y=rad.y;
		}else{
			batas.y=rad.y;
			ori.x=rad.x;
		}
	}
}
