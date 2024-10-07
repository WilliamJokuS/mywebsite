#include <iostream>
using namespace std;
long long C;
long long koin[50005];
long long memo[50005];
long long min(long long a,long long b){
	if(a<b)return a;
	else return b;
}
long long minimal(long long total){
	long long mini=51000;
	if(total==0)return 0;
	if(total<0)return 51000;
	else if(memo[total]!=0){
		return memo[total];
	}else{
		for(long long i=0;i<C;i++){
			mini=min(mini,1+minimal(total-koin[i]));
		}
		memo[total]=mini;
	}
	return memo[total];
}
long long main(){
	cin>>C;
	long long n;
	for(long long i=0;i<C;i++){
		cin>>koin[i];
	}
	cin>>n;
	cout<<minimal(n)<<endl;
}
