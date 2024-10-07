#include <bits/stdc++.h>
using namespace std;
int k,n;
int a[5];
int main(){
	ios_base::sync_with_stdio(false);
	cin>>k>>n;
	for(int i=1;i<=k;i++){
		cin>>a[i];
	}
	int i,x,jwb;
	bool start=true;
	while(true){
		if(i==-1&&x==-1)break;
		if(a[1]==a[2])start=false;
		else{
			if(start==true){
				if(a[1]>a[2]){
					if(a[2]%(n+1)==0)jwb=a[1]%(n+1);
					else jwb=(a[1]+n+1-(a[2]%(n+1)))%(n+1);
					cout<<1<<" "<<jwb<<endl;
					a[1]-=jwb;
				}else{
					if(a[1]%(n+1)==0)jwb=a[2]%(n+1);
					else jwb=(a[2]+n+1-(a[1]%(n+1)))%(n+1);
					cout<<2<<" "<<jwb<<endl;
					a[2]-=jwb;
				}
				if(a[1]==a[2])start=false;
			}else if(i==1){
				cout<<2<<" "<<x<<endl;
			}else{
				cout<<1<<" "<<x<<endl;
			}
		}
		cin>>i>>x;
		a[i]-=x;
	}
}

