#include <bits/stdc++.h>
using namespace std;
int cnt[10];
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		cnt[s[i]-'0']++;
	}
	string start="",end="";
	bool zero=false;
	for(int i=9;i>=0;i--){
		while(cnt[i]>=2){
			if(i==0&&!zero)break;
			zero=true;
			start=start+char(48+i);
			end=char(48+i)+end;
			cnt[i]-=2;
		}
	}
	
	for(int i=9;i>=0;i--){
		if(cnt[i]){
			start=start+char(48+i);
			break;
		}
	}
	cout<<start<<end<<endl;
}
