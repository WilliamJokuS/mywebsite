#include <iostream>
using namespace std;
int a[10000];
void push_front(int x){
	for(int i=1;i<=m;i++){
		a[i]=a[i-1];
	}
	a[0]=x;
}
void push_back(int x){
	a[m]=x;
}
void pop_back(){
	a[m]=0;
}
void pop_front(){
	for(int i=1;i<=m;i++){
		a[i-1]=a[i];
	}
	a[m]=0;
}
int main(){
	int m,n,x;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s>>x;
		if(s=="push_front"){
			
		}else if(s=="push_back"){
			
		}else if(s=="pop_front"){
			
		}else if(s=="pop_back"){
			
		}
	}
}
