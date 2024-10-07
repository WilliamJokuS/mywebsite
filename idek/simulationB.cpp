#include <bits/stdc++.h>
using namespace std;
using ll= long long;
int main(){
	int t,len;
	string s;
	char l;
	cin>>t;
	while(t--){
		cin>>s;
		int nA=0,nB=0,len=0;
		l='c';
		for(int i=0;i<s.size();i++){
			if(s[i]=='.'){
				if(l=='c')continue;
				else len++;
			}else if(s[i]=='A'){
				if(l=='c')l='A';
				else if(l=='A')nA+=len;
				else l='A';
				nA++;
				len=0;
			}else if(s[i]=='B'){
				if(l=='c')l='B';
				else if(l=='B')nB+=len;
				else l='B';
				nB++;
				len=0;
			}
		}
		cout<<nA<<" "<<nB<<endl;
	}
}
