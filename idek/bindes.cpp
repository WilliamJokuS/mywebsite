#include <bits/stdc++.h>
using namespace std;
string biner(int x){
		if(x==1)return "1";
        if(x%2==0)return biner(x/2)+"0";
        else return biner(x/2)+"1";
}
int main(){
	string heks;
	cin>>heks;
	for(int i=0;i<heks.size();i++){
		if(heks[i]>'9')cout<<biner(heks[i]-'A'+10)<<" ";
		else cout<<biner(heks[i]-'0');
	}
//	if('A'<'9')cout<<"Yes";
//	else cout<<"NO\n";
}
//
//   F    F
//1111 1111



