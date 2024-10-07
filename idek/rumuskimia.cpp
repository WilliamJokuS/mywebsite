#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int jwb=0,tmp=0,n;
	bool kali=false;
	stack <char> sc;
	cin>>s;
	for(int i=0;i<s.size();i++){
		n=0;
		if(s[i]=='C')n=12;
		else if(s[i]=='H')n=1;
		else if(s[i]=='O')n=16;
		else if(s[i]=='('){
			sc.push(s[i]);
			if(kali)kali=false;
			continue;
		}
		if(kali==true){
			kali=false;
			if(sc.empty()){
				if(n!=0){
					jwb+=tmp;
					jwb+=n;
				}
				tmp*=s[i]-'0';
				jwb+=tmp;
			}
			else{
				tmp+=n;
				if(s[i]==')'){
					sc.pop();
					kali=true;
				}else if(n==0){
					tmp*=s[i]-'0';
					jwb+=tmp;
				}
			}
		}else{
			if(sc.empty()){
				tmp=0;
				jwb+=n;
			}
			else{
				tmp+=n;
				if(s[i]==')'){
					sc.pop();
					kali=true;
				}else{
					if(n!=0){
						continue;
					}
					else if(s[i-1]=='C')tmp+=(s[i]-'0'-1)*12;
					else if(s[i-1]=='H')tmp+=(s[i]-'0'-1);
					else if(s[i-1]=='O')tmp+=(s[i]-'0'-1)*16;
				}
			}
		}
		cout<<jwb<<endl;
	}	
	cout<<jwb<<endl;
}
