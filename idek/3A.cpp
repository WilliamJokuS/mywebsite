#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	int kupon[1005];
	int min=500000;
	int win=500000;
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		cin>>kupon[i];
		int dif=abs(x-kupon[i]);
		if(dif<min){
			min=dif;
			win=kupon[i];
		}else if(dif==min){
			if(kupon[i]<win){
				win=kupon[i];
			}
		}
	}
	cout<<win<<endl;
}
