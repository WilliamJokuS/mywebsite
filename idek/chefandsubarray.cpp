#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,tmp;
	cin>>n;
	int max=0,streak=0;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		if(tmp!=0)streak++;
		if(i==n||tmp==0){
			if(streak>max)max=streak;
			streak=0;
		}
	}
	cout<<max<<"\n";
}
