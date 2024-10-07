#include <bits/stdc++.h>
using namespace std;
bool cek(int current){
	for(int tmp=2;tmp*tmp<=current;tmp++){
		if(current%tmp==0)return false;
	}
	return true;
}
int main(){
	int n,i=0,current=1;
	cin>>n;
	while(i<n){
		current++;
		if(cek(current)==true)i++;
	}
	cout<<current;
}
