#include <bits/stdc++.h>
using namespace std;
struct jam{
	int hour, minute;
};
bool compare(jam a,jam b){
	if(a.hour<b.hour)return true;
	if(a.hour==b.hour&&a.minute<b.minute)return true;
	return false;
}
jam jamm[15];
int h,m,t,n;
int main(){
	cin>>t;
	while(t--){
		int jam[15],menit[15];
		cin>>n>>h>>m;
		for(int i=1;i<=n;i++){
			cin>>jamm[i].hour>>jamm[i].minute;
		}
		sort(jamm+1,jamm+n+1,compare);
		int ansh=-1,ansm=-1;
		for(int i=1;i<=n;i++){
			if(jamm[i].hour>h){
				if(jamm[i].minute<m){
					jamm[i].hour--;
					jamm[i].minute+=60;
				}
				ansh=jamm[i].hour-h,ansm=jamm[i].minute-m;
				break;
			}
			if(jamm[i].hour==h&&jamm[i].minute>=m){
				ansh=0,ansm=jamm[i].minute-m;
				break;
			}
		}
		if(ansh==-1&&ansm==-1){
			jamm[1].hour+=24;
			if(jamm[1].minute<m){
				jamm[1].hour--;
				jamm[1].minute+=60;
			}
			ansh=jamm[1].hour-h,ansm=jamm[1].minute-m;
		}
		cout<<ansh<<" "<<ansm<<endl;
	}
}
