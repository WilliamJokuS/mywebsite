#include <bits/stdc++.h>
#include "func.h"
using namespace std;
class point{
	private:
		int x;
		int y;
	public:
	void setX(int x){
		cout<<this<<endl;
		(*this).x=x;
		return;
	}
	void setY(int y){
		cout<<this<<endl;
		this->y=y;
		return;
	}
	int getX(){
		return x;
	}
	int getY(){
		return y;
	}
};

int main(){
//	int x,y;
//	int*p1,*p2;
//	x=3,y=4;
//	p1=&x,p2=&y;
//	cout<<x<<" "<<y<<endl;
//	*p1=10;
//	cout<<*p1<<" "<<*p2<<endl;

	int n1=10,n2=20;
	int &pol=n1;
	cout<<pol<<endl;
	swapep(n1,n2);
	cout<<n1<<" "<<n2<<endl;
	
//	int val[3] = { 5, 10, 20 };
//
//    // declare pointer variable
//    int* ptr;
//    // Assign the address of val[0] to ptr
//    // We can use ptr=&val[0];(both are same)
//    ptr = val;
//    cout << val<<" "<<val+1<<" "<<val+2<<endl;
//    cout << "Elements of the array are: ";
//    cout << ptr[0] << " " << ptr[1] << " " << ptr[2]<<endl;
//    cout<<*ptr<<endl;
    
//    point pt;
//    pt.setX(3);
//	pt.setY(1);
//    point *pp=&pt;
//    cout<<&pt<<endl;
//    cout<<pp<<endl;
//    cout<<pp->getX()<<" ";
//	cout<<(*pp).getY()<<endl;
	
	
}
//& : address
//* : pointer
//var* : variable to store address can
//var& = variable to store address but cant retrieve the adress
//var& = can also be used to store normal var
