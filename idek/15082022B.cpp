#include <bits/stdc++.h>
using namespace std;
int prima[4]={2,3,5,7};
string s;
int cnt[5];
void add(int x){
	if(x==1||x==0)return;
	else if(x==2)cnt[0]++;
	else if(x==3)cnt[1]++;
	else if(x==4){
		cnt[1]++;
		cnt[0]+=2;
	}
	else if(x==5)cnt[2]++;
	else if(x==6){
		cnt[1]++;
		cnt[2]++;
	}
	else if(x==7)cnt[3]++;
	else if(x==8){
		cnt[0]+=3;
		cnt[3]++;
	}
	else if(x==9){
		cnt[1]+=2;
		cnt[0]+=1;
		cnt[3]++;
	}
}
int main(){
	int n;
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++){
		int tmp=s[i]-'0';
		add(tmp);
	}
	for(int i=3;i>=0;i--){
		for(int j=1;j<=cnt[i];j++){
			cout<<prima[i];
		}
	}
	cout<<endl;
}
