#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	string in;
	cin>>a>>b;
	cin.ignore();
  	while(a<=b){
  		int mid=(a+b)/2;
  		cout<<mid<<"\n";
  		fflush(stdout);

  		getline(cin,in);
  		if(in=="selamat")break;
  		else if(in=="terlalu kecil")a=mid+1;
		else if(in=="terlalu besar")b=mid-1;
	}
}
