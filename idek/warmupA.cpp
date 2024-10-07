#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int cnt=n;
	for(int i=0;i<n;i++){
		if(i%7==6||i%7==0)cnt--;
	}
	cout<<cnt<<endl;
}
