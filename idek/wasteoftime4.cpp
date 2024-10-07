#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	if(x==0||y==0){
		if(x==0&&y==0)cout<<"Titik 0,0";
		else if(x==0)cout<<"Sb Y";
		else cout<<"Sb X";
	}
	else if(x>0&&y>0)cout<<"Sb 1";
	else if(x<0&&y>0)cout<<"Sb 2";
	else if(x<0&&y<0)cout<<"Sb 3";
	else cout<<"Sb 4";
	cout<<endl;
}
