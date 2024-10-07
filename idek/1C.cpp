#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s,cek;
	cin>>s;
	cin>>n;
	if(s.size()==0){
		while(n--){
			cin>>cek;
			cout<<cek<<endl;
		}
	}else if(s[0]=='*'){
		s.erase(0,1);
		while(n--){
			cin>>cek;
			if(cek.find(s,cek.size()-s.size())!=string::npos)cout<<cek<<endl;
		}
	}else if(s[s.size()-1]=='*'){
		s.erase(s.size()-1);
		while(n--){
			cin>>cek;
			if(cek.find(s)==0)cout<<cek<<endl;
		}
	}else{
		int idx=s.find("*");
		string awal=s,akhir=s;
		awal.erase(idx);
		akhir.erase(0,idx+1);
		while(n--){
			cin>>cek;
			if(cek.find(awal)==0&&cek.size()>=s.size()-1){
				if(cek.find(akhir,cek.size()-akhir.size())!=string::npos)cout<<cek<<endl;
			}
		}
	}
	
}
