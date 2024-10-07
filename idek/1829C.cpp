#include <bits/stdc++.h>
#define INF 1e6
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string type;
		int time,n;
		int min1=INF,min2=INF,min12=INF;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>time>>type;
			if(type=="10")min1=min(min1,time);
			else if(type=="01")min2=min(min2,time);
			else if(type=="11")min12=min(min12,time);
		}
		if((min12==INF)&&(min1==INF||min2==INF))cout<<-1<<endl;
		else cout<<min(min1+min2,min12)<<endl;
	}
}
