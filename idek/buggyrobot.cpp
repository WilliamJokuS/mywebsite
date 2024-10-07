#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+3];
	string s;
	cin>>s;
	int v=0,h=0,nv=0,nh=0;
	for(int i=1;i<=n;i++){
		char tmp=s[i-1];
		if(tmp=='U'){
			v++;
			nv++;
		}else if(tmp=='D'){
			v--;
			nv++;
		}
		else if(tmp=='R'){
			h++;
			nh++;
		}
		else{
			h--;
			nh++;
		}		
	}
	cout<<nh-abs(h)+nv-abs(v)<<"\n";
}
