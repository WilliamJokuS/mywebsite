#include <bits/stdc++.h>
using namespace std;
int n;
bool trip[1005];
bool dble;
bool bisa;
int idx;
int main(){
	for(int i=5;i<=1000;i++){
		dble=false;
		idx=0;
		bisa=false;
		for(int j=i-1;j>=1;j--){
			if(idx==j)continue;
			int tmp=sqrt(i*i-j*j);
			if(tmp*tmp==i*i-j*j){
				if(bisa==true){
					dble=true;
					break;
				}
				bisa=true;
				idx=tmp;
			}
		}
		if(bisa){
			for(int j=i;j<=1000;j+=i){
				if(dble)trip[j]=false;
				else trip[j]=true;
			}
		}
	}
	cin>>n;
	for(int i=n;i>=1;i--){
		if(trip[i]==true){
			cout<<i<<endl;
			break;
		}
		if(i<5){
			cout<<-1<<endl;
			break;
		}
	}
}
