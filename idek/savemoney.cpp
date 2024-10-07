#include<bits/stdc++.h>
using namespace std;
struct point{
	double x;
	double y;
};
struct line{
	int m,c;//y=mx+c
};
bool compare1(point a,point b){
	if(a.x<b.x)return true;
	else if(a.x>b.x)return false;
	else return (a.y<b.y);
}
bool compare2(point a,point b){
	if(a.x<b.x)return true;
	else if(a.x>b.x)return false;
	else return (a.y>b.y);
}
line   lines[10000];
vector<point> points;
int main(){
	string s;
	int lsz=0;
	//input
	while(getline(cin,s)){
		lsz++;
		int pos=s.find(" ");
		string atmp=s.substr(0,pos);
		int a1=atoi(atmp.c_str());
		string btmp=s.erase(0,pos+1);
		int b1=atoi(btmp.c_str());

		lines[lsz].m=a1;
		lines[lsz].c=b1;
	}
	//points generator
	for(int i=1;i<lsz;i++){
		for(int j=i+1;j<=lsz;j++){
			if(lines[i].m-lines[j].m!=0){
				point tmp;
				tmp.x=(lines[j].c-lines[i].c)/(lines[i].m-lines[j].m);
				tmp.y=lines[i].m*tmp.x+lines[i].c;
				points.push_back(tmp);
			}
		}
	}
	
	int psz=points.size();
	double xmin=0,xmax=0,ymin=0,ymax=0;
	if(psz>=1){
		xmin=points[0].x;
		xmax=points[0].x;
		ymin=points[0].y;
		ymax=points[0].y;
	}
	for(int i=1;i<psz;i++){
		xmin=min(xmin,points[i].x);
		xmax=max(xmax,points[i].x);
		ymin=min(ymin,points[i].y);
		ymax=max(ymax,points[i].y);
	}	
	cout<<fixed<<setprecision(5)<<(xmax-xmin)*(ymax-ymin)<<endl;
}
