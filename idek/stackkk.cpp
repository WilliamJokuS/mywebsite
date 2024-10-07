#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	int a[t+5],top=0; 
	while(t>0){
		int choice,n;
		cin>>choice;
		if(choice==1){
			cin>>n;
			top++;
			a[top]=n;
		}else if(choice==2){
			if(top>0)top--;
		}
		else{
			if(top==0)cout<<"Empty!\n";
			else cout<<a[top]<<"\n";
		}
		t--;
	}
}
