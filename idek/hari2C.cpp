#include <bits/stdc++.h>
using namespace std;
int n,k,sum=0;
string s;
int a[1030][12];
bool jwb[12];
int main(){
	int p[11]={0,1,2,4,8,16,32,64,128,256,512};
	cin>>n>>k;
	for(int i=1;i<=1023;i++){
		for(int j=1;j<=10;j++){
			a[i][j]=bitset<10>(i)[10-j];
		}
	}
	cout<<"? 10"<<endl;
	for(int i=1;i<=10;i++){
		cout<<512;
		for(int j=1;j<=1024;j++){
			if(a[j][i]==1)cout<<" "<<j;
		}
		cout<<endl;
	}
	for(int i=1;i<=10;i++){
		cin>>s;
		if(s=="YA")sum+=p[11-i];
	}
	cout<<"! ";
	if(sum==0)sum=1024;
	cout<<sum<<endl;
	for(int i=1;i<1=0;i++){
		cout<<512;
		for(int j=1;j<1024;j++)
	}
	
}
