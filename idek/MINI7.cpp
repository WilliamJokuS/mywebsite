#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	string tmp;
	int a[30],b[30];
	while(t>0){
		char c=' ';
		int min=30;
		t--;
		cin>>tmp;
		for(int i=1;i<tmp.size();i++){
			if(min>tmp[i]-'a'&&tmp[i]!=tmp[0]){
				min=tmp[i]-'a';
			}
		}
		for(int i=0;i<tmp.size();i++){
			if(tmp[i]-'a'>min){
				c=tmp[i];
				break;
			}
		}
		if(c==' ')cout<<tmp<<endl;
		else{
			for(int i=0;i<tmp.size();i++){
				if(tmp[i]==c)tmp[i]=char(min+97);
				else if(tmp[i]-'a'==min)tmp[i]=c;
			}
			cout<<tmp<<endl;
		}
	}
}
