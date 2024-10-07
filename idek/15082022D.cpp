#include <bits/stdc++.h>
using namespace std;
int len,sum;
int ansl[905];
int ansh[905];
void low(){
	ansl[1]=1;
	int cur=sum-1;
	for(int i=len;i>=1;i--){
		if(cur>=9){
			ansl[i]+=9;
			cur-=9;
		}
		else{
			ansl[i]+=cur;
			break;
		}
	}
}
void high(){
	ansh[1]=1;
	int cur=sum-1;
	for(int i=1;i<=len;i++){
		if(cur>=9){
			if(i==1){
				ansh[i]+=8;
				cur-=8;
			}else{
				ansh[i]+=9;
				cur-=9;
			}
		}
		else{
			ansh[i]+=cur;
			break;
		}
	}
}
int main(){
	cin>>len>>sum;
	for(int i=1;i<=len;i++){
		ansl[i]=0;
		ansh[i]=0;
	}
	if(sum>len*9||sum==0){
		if(sum==0&&len==1)cout<<0<<" "<<0<<endl;
		else cout<<-1<<" "<<-1<<endl;
		return 0;
	}
	low();
	high();
	for(int i=1;i<=len;i++)cout<<ansl[i];
	cout<<" ";
	for(int i=1;i<=len;i++)cout<<ansh[i];
	cout<<endl;
}

