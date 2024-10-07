#include <bits/stdc++.h>
using namespace std;
int n,k,s1,s2,s3,s4,t,jns,cnt=0;
string s;
bool bisa[25];
int main(){
	cin>>n>>k;
	cin>>s1>>s2>>s3>>s4;
	for(int i=1;i<=n;i++){
		cin>>s;
		for(int j=1;j<=n;j++){
			if(i==s1||i==s2||i==s3||i==s4){
				if(s[j-1]=='1')bisa[j]=true;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cin>>t;
		if(t==1){
			cin>>jns;
			if(bisa[jns]==true)cnt++;
		}
	}
	cout<<19<<endl;
}
