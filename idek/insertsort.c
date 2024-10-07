#include <bits/stdc++.h>
using namespace std;
int a[1000];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=2;i<=n;i++){
		int idx=i;
		int tmp=a[idx];
		while(idx>=1&&a[idx-1]>=tmp){
			a[idx]=a[idx-1];
			idx--;
		}
		a[idx]=tmp;
	}
}
