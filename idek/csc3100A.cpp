#include <bits/stdc++.h>
using namespace std;
int abs(int x){
	if(x<0)return -x;
	else return x;
}
int counter[1000005];
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m,p;
	long long sum=0,distinct=0;
	cin>>n>>m>>p;
	int a[n+5];
	memset(counter,0,sizeof counter);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
		counter[abs(a[i])]++;
		if(counter[abs(a[i])]==2&&a[i]!=0)distinct++;
		else if(counter[abs(a[i])]==1)distinct++;
	}
	
	while(m--){
		int tc;
		cin>>tc;
		if(tc==1){
			int k,x,y,c;
			cin>>k>>x>>y>>c;
			
			sum-=a[k];
			counter[abs(a[k])]--;
			if(counter[abs(a[k])]==0)distinct--;
			else if(counter[abs(a[k])]==1&&a[k]!=0)distinct--;
			
			int newElement=((x*x+k*y+5*x)%p)*c;
			
			sum+=newElement;
			counter[abs(newElement)]++;
			if(counter[abs(newElement)]==2&&newElement!=0)distinct++;
			else if(counter[abs(newElement)]==1)distinct++;
			
			a[k]=newElement;
		}else if(tc==2){
			cout<<sum<<endl;
		}else{
			cout<<distinct<<endl;
		}
	}
}



