#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,ans;
	cin>>n>>k;
	int l=1,r=n,w1,w2;
	while(l<r){
		if(l<1)l=1;
		if(r>n)r=n+1;
		int mid=(l+r)/2;
		int l1=l,r1=mid;
		int l2=(l1+mid+1)/2,r2=(mid+r)/2;
		cout<<"Q "<<l1<<" "<<r1<<" "<<l2<<" "<<r2<<endl;
		cin>>w1>>w2;
		if(w1==0&&w2==0){
			l=r2+1;
		}else if(w1==1&&w2==0){
			if(l1==r1){
				ans=l1;
				break;
			}
			if(r1==l2&&r1-l1==1){
				ans=l1;
				break;
			}
			if(r1==l2&&l2==r2){
				ans=l1;
				break;
			}
			r=l2-1;
		}else if(w1==0&&w2==1){
			if(l2==r2){
				ans=l2;
				break;
			}
			if(r1==l2&&r2-l2==1){
				ans=r2;
				break;
			}
			if(l1==r1&&r1==l2){
				ans=r2;
				break;
			}
			l=r1+1;
		}else if(w1==1&&w2==1){
			if(r1==l2){
				ans=r1;
				break;
			}
			l=l2;
			r=r1;
		}
		l--;
		r++;
	}
	cout<<"A "<<ans<<endl;
}
