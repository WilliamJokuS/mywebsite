#include <bits/stdc++.h>
using namespace std;
class number{
     private:
     int data; 

     public: 
     void input(){
         cin>>data;
     }
	void output(){
		cout<<data;
	}
     int getinput() {
         return data; 
     }
 }; 
 class show{
     private: 
     number numb; 
     public:

     void show1(){
         cout<<numb.getinput(); 
     }
 }; 
 
void jalankan_enkapsulasi(){ 

}
int main(){
	show s;
	s.numb= 10;
	cout<<s.numb;
}
