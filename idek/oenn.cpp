#include <bits/stdc++.h>
#define pb push_back
using namespace std;
double tmp;
int banyak[105];
int main(){
	int n;
	vector<int> arr;
	arr.pb(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		arr.pb(tmp);
	}
	sort(arr.begin(),arr.end());
	for(int i=1;i<arr.size();i++){
		banyak[arr[i]]++;
	}
	int nmaks=0;
	vector<int> modus;
	for(int i=1;i<=100;i++){
		if(banyak[i]>nmaks){
			modus.clear();
			modus.pb(i);
			nmaks=banyak[i];
		}else if(banyak[i]==nmaks){
			modus.pb(i);
		}
	}
	for(auto i: modus){
		cout<<i<<" ";
	}
}
