#include <iostream>
using namespace std;
int a[2][2001];	
void tuker(int a,int b){
	int temp;
	temp =a;
	a=b;
	b=temp;
	
}
int main(){
	int t,n;
	cin>>n;
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cin>>t;
	char p,q;
	int tmp,x,y;
	for(int i=1;i<=t;i++){
		cin>>p>>x>>q>>y;
		tmp= a[p-'A'][x-1];
		a[p-'A'][x-1]=a[q-'A'][y-1];
		a[q-'A'][y-1]=tmp;
	}
	for(int i=0;i<2;i++){
    	for (int j=0;j<n;j++){
      		cout<<a[i][j];
      		if (j+1<n){
        		cout<<" ";
      		}
    	}
    	cout<<"\n";
    }
}
