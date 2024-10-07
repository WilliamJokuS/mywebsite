#include <bits/stdc++.h>
using namespace std;
string name[8]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
string s;
int main(){
	int n;
	cin>>n;
	cin>>s;
	for(int i=0;i<8;i++){
		bool dapet=true;
		for(int j=0;j<n;j++){
			if(s[j]=='.')continue;
			if(s[j]!=name[i][j]){
				dapet=false;
				break;
			}
		}
		if(dapet&&name[i].size()==n){
			cout<<name[i]<<endl;
			return 0;
		}
	}
	
}
