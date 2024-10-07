#include <bits/stdc++.h>
using namespace std;
int a[1000],b[1000],m[100000];
void merge(int sza,int szb){
	int cura=1,curb=1,sz=1;
	while(cura<=sza&&curb<=szb){
		if(a[cura]<b[curb]){
			m[sz]=a[cura];
			cura++
			sz++;
		}else{
			m[sz]=b[curb];
			curb++
			sz++;
		}
	}
	while(cura<=sza){
		m[sz]=a[cura];
		cura++
		sz++;
	}
	while(curb<=szb){
		m[sz]=b[curb];
		curb++
		sz++;	
	}
}
int main(){
	int n1,n2;
	cin>>n1>>n2;
	for(int i=1;i<=n1;i++)cin>>a[i];
	for(int i=1;i<=n2;i++)cin>>b[i];
	merge(n1,n2);
}
