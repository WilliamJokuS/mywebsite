#include <bits/stdc++.h>
using namespace std;
struct beras {
    int w;
    int c;
    double cost;
};

beras b[1000];

bool banding(beras a,beras b){
	return a.cost>b.cost;
}
int main(){
	int n,x;
    cin>>n>>x;
    for(int i=1; i<=n;i++) {
        cin>>b[i].w;
    }
    for(int i=1; i<=n;i++) {
        cin>>b[i].c;
        b[i].cost=((double)b[i].c)/b[i].w; 
    }
    sort(b+1,b+n+1,banding);
    double tot=0;
	for(int i=1;i<=n;i++){
    	if(b[i].w<=x){
    		x-=b[i].w;
    		tot+=b[i].c;
		}else{
			tot+=x*b[i].cost;
			break;
		}
	}
	cout<<fixed<<setprecision(5)<<tot<<endl;
}
