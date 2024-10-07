#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll ansl[5]={0,47,4477,444777,44447777};
ll ansh[5]={0,74,7744,777444,77774444};
ll gtw1[5]={0,47,4774,477744,47777444};
ll gtw2[5]={0,74,7447,744477,74444777};
bool cek(int x){
	int idx4=0,idx7=0;
	while(x>0){
		if(x%10!=4&&x%10!=7)return false;
		if(x%10==4)idx4++;
		else idx7++;
		x/=10;
	}
	if(idx4!=idx7)return false;
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	if(n>77774444){
		cout<<4444477777<<endl;
		return 0;
	}
	for(int i=1;i<=5;i++){
		if(n<=ansl[i]){
			cout<<ansl[i]<<endl;;
			break;
		}
		else if(n<=ansh[i]){
			if(n<=gtw1[i]){
				for(int j=n;j<=gtw1[i];j++){
					if(cek(j)){
						cout<<j<<endl;
						return 0;
					}
				}
			}else if(n<=gtw2[i]){
				cout<<gtw2[i]<<endl;
				return 0;	
			}else{
				for(int j=n;j<=ansh[i];j++){
					if(cek(j)){
						cout<<j<<endl;
						return 0;
					}
				}
			}				
		}
	}
}
