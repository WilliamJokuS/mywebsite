#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	char c='a';
	for(int i=0;i<n;i++){
		cout<<char(c+(i%3));
	}
	cout<<endl;
}
