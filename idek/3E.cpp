#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	char nama[505][11];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>nama[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-1;j++){
			if(strlen(nama[j])>strlen(nama[j+1]))swap(nama[j],nama[j+1]);
			else if(strlen(nama[j])==strlen(nama[j+1])){
				if(strcmp(nama[j],nama[j+1])>0)swap(nama[j],nama[j+1]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<nama[i]<<endl;
	}
}
