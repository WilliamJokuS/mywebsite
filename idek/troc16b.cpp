#include <bits/stdc++.h>
using namespace std;
int a[200005];
int b[200005];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int j=1;
	for(int i=1;i<=n;i++){
		if(b[j]!=a[i]){
			b[j]=a[i];
			j++;
		}
	}
	j--;
	int min=b[j]-b[1];
	for(int i=2;i<=j;i++){
		if(min>m-(b[i]-b[i-1])){
			min=m-(b[i]-b[i-1]);
		}
	}
	cout<<min<<endl;
}
