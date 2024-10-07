#include <bits/stdc++.h>
using namespace std;
string base="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
map <char,int> char2b64;

void setup(){
	for(int i=0;i<base.size();i++){
		char2b64[base[i]]=i;
	}
}

void LFSR(){
	int seed[]={ 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0};
	deque <int> dq;
	for(int i=0;i<11;i++){
		dq.push_back(seed[i]);
	}
	for(int i=0;i<=2000;i++){
		dq.push_back((dq.at(0)^dq.at(2)));
		dq.pop_front();
		cout<<dq.back();
	}
	cout<<endl;
}
int main(){
	//LFSR();
	setup();
	string message,pad;
	
	cout<<"Your message you want to sent: ";
	cin>>message;
//	cout<<"Message in base64: \n";
//	for(int i=0;i<message.size();i++){
//		cout<<char2b64[message[i]]<<" ";
//	}
//	cout<<"\n";
	
	cout<<"Your 1 time pad: ";
	cin>>pad;
//	cout<<"1 time pad in base64: \n";
//	for(int i=0;i<pad.size();i++){
//		cout<<char2b64[pad[i]]<<" ";
//	}
//	cout<<"\n";
	
//	cout<<"Encrypted Message in base64: \n";
//	for(int i=0;i<message.size();i++){
//		int x=char2b64[message[i]];
//		int y=char2b64[pad[i]];
//		cout<<(x^y)<<" ";
//	}
//	cout<<"\n";
	
	cout<<"Encrypted message in characters: \n";
	for(int i=0;i<message.size();i++){
		int x=char2b64[message[i]];
		int y=char2b64[pad[i]];
		cout<<base[(x^y)]<<" ";
	}
}
