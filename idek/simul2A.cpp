#include <bits/stdc++.h>
using namespace std;
int INF=100005;
bool  a[100005];
int main(){
	a[0]=true;
	a[1]=true;
	for(int i=2;i*i<=INF;i++){
		if(!a[i]){
			for(int j=i*i;j<=INF;j+=i){
      			a[j]=true;
      		}
		}
    }
    int n;
	cin>>n;
	if(n<=2){
		cout<<1<<endl;
	}
	else cout<<2<<endl;
	for(int i=2;i<=n+1;i++){
		if(a[i]==false)cout<<"1 ";
		else cout<<"2 ";
	}
	cout<<endl;
}
