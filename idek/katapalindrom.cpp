#include <iostream>
using namespace std;
int main(){
	string s;
	bool palindrom=true;
	cin>>s;
	int n;
	n=s.length();
	for(int i=0;i<(n-1)/2;i++){
		if(s[i]-'0'==s[n-1-i]-'0'){
			
		}else{
			palindrom=false;
			break;
		}
	}
	if(palindrom==true){
		cout<<"YA\n";
	}else{
		cout<<"BUKAN\n";
	}
}

 
