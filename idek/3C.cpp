#include <bits/stdc++.h>
using namespace std;
int n;
struct phonebook {
    char name[11];
    char num[7];
};
typedef struct phonebook Phonebook;
Phonebook PB[100001];

void solve(char tmp[]){
	int kiri=1,kanan=n;
	while(kiri<=kanan){
		int mid=(kiri+kanan)/2;
		if(strcmp(tmp,PB[mid].name)<0){
			kanan=mid-1;
		}else if(strcmp(tmp,PB[mid].name)>0){
			kiri=mid+1;
		}else{
			cout<<PB[mid].num<<endl;
			return;
		}
	}
	cout<<"NIHIL\n";
	return;
}
int main(){
	char tmp[11];
	int q;
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>PB[i].name>>PB[i].num;
	}
	while(q--){
		cin>>tmp;
		solve(tmp);
	}
	
}
