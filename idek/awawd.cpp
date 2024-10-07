#include <bits/stdc++.h>
using namespace std;
int bola[10];
int cnt=0;
int rec(int idx){
	if(idx>8){
		cnt++;
		for(int  i=1;i<=8;i++){
			cout<<bola[i];
		}
		cout<<endl;
	}else{
		for(int i=1;i<=5;i++){
			if(idx>=3&&bola[idx-2]==i)continue;
			bola[idx]=i;
			rec(idx+1);
		}
	}
}
typedef long long ll;
ll f(ll x){
	if(x<=1)return 1;
	else return f(x/2)*2+x;
}
int main(){
	cout<<f(1048576)<<endl;
	int cnt=1;
	set<int> s;
	s.insert(1);
	while(s.size()<5000){
		for(auto i: s){
			s.insert(i*5);
			s.insert(i+100);
			if(s.size()>5000)break;
		}
	}
	int idx=0;
	for(auto i:s){
		idx++;
		cout<<idx<<" "<<i<<endl;
	}
}
