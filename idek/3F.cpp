#include <bits/stdc++.h>
using namespace std;
char nama[1005][11];
int lower(char z[11],int i){
	int l=1,r=i-1,mid,tmp;
	while(l<=r){
		mid=(l+r)/2;
		if(strcmp(z,nama[mid])>0||strcmp(z,nama[mid])==0){
			l=mid+1;
			tmp=mid;
		}
		else if(strcmp(z,nama[mid])<0){
			r=mid-1;
			tmp=r;
		}
	}
	return tmp;
}
void solve(char z[11],int i){
	if(i==1){
		strcpy(nama[i],z);
		cout<<1<<endl;
		return;
	}
	int lb=lower(z,i);
	for(int j=i;j>lb+1;j--){
		swap(nama[j],nama[j-1]);
	}
	strcpy(nama[lb+1],z);
	cout<<lb+1<<endl;
	return;
}

int main(){
	char tmp[11];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		solve(tmp,i);
	}
	
}
