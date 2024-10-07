#include <bits/stdc++.h>
using namespace std;
string a,b;
bool bisa=true;
int idx=0;
int main(){
	cin>>a>>b;
	if(a.size()-b.size()==1){
		for(int i=0;i<b.size();i++){
			if(a[i]!=b[i])break;
			idx++;
		}
		for(int i=idx;i<b.size();i++){
			if(a[i+1]!=b[i]){
				bisa=false;
				break;
			}
		}
	}else bisa=false;
	if(bisa)cout<<"Tentu saja bisa!"<<endl;
	else cout<<"Wah, tidak bisa :("<<endl;
}
