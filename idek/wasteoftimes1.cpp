#include <bits/stdc++.h>
using namespace std;

int arr[20]={0,8,1,2,3,2,3,7,0,2,9,8};
			
vector<int> vec;
bool cekh(int i,int j){
	if(arr[i]!=vec[j])return false;
	if(j==vec.size()-1)return true;
	if(i>=20)return false;
	return cekh(i+1,j+1);
}
//bool cekv(int i,int j){
//	
//}
//bool cekd(int i,int j){
//	
//}
int main(){
	int cnt=0;
    string input;
    getline(cin, input);
    istringstream is(input);
    int n;
    while(is>>n) vec.push_back(n);
	for(int i=0;i<sizeof(arr);i++){
		if(cekh(i,0))cnt++;
	}
	cout<<cnt<<endl;
}
