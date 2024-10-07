#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int arr[55];
bool udh[1005];
int main(){
	int n,tmp,idx=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		if(!udh[tmp]){
			arr[idx]=tmp;
			udh[tmp]=true;
			idx++;
		}
	}
	sort(arr,arr+idx);
	for(int i=0;i<idx-2;i++){
		if(arr[i+2]-arr[i]==2){
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
}
