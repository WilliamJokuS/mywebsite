#include <bits/stdc++.h>
using namespace std;

map <string,int> occ;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(occ.find(s)==occ.end()){
			cout<<"OK\n";
			occ[s]=1;
		}else{
			cout<<s;
			cout<<occ[s]<<endl;
			occ[s]++;
		}
	}	
}
