#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int a[10];
    int cnt=0;
    for(int i=1;i<=40;i++){
    	for(int j=1;j<=40;j++){
    		if(i%2==j%2)continue;
    		if(i+j>40)break;
    		if(i%j==0||j%i==0){
    			cout<<i<<" "<<j<<endl;
			}
		}
	}
	cout<<cnt<<endl;
}

//7, 11, 4, 8, 18, 9, 14, 2, 6, 12
//ahaahaaahhahh
//hhhaahaaahhahh
//hhhahhaaaahhahh
//hhhhhahaaaahhahh
//hhhhhhhaaaaahhahh
//
//aaaahhahahh
//aaahhahahahh
//aahhahahahahh
//ahhahahahahahh
//hhahahahahahahh
//hhhhaahahahahahh
//hhhhahhaahahahahh
//hhhhhhahaahahahahh
//hhhhhhhhaaahahahahh
//hhhhhhhhaahhaahahahh
//hhhhhhhhaahhaahahahh

