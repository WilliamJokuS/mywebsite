#include <bits/stdc++.h>
using namespace std;
class point{
	
	public:
		point(){
		}
		point(int x,int y){
			this->x=x;
			this->y=y;
		}
		int x;
		int gety();
		int getx(){
			return x;
		}
		void sety(int tmp){
			y=tmp;
		}
	private:
		int y;
};
int point::gety(){
	return y;
}
int main(){
	point p2;
	point p1(10,10);
	cout<<p1.getx()<<p1.gety();
//	p1.y=1;
//	cout<<p1.y;
}
