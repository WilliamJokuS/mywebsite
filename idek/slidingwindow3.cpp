#include <iostream>
#include <string.h>
using namespace std;
int counter[26];
int beda=0;
void tambah(char c){
	int angka=c-'A';
	if(counter[angka]==0){
		beda++;
	}
	counter[angka]++;
}
void kurang(char c){
	int angka=c-'A';
	if(counter[angka]==1){
		beda--;
	}
	counter[angka]--;
}
int main(){
	string s;
	int jawab=100000;
	int m,kiri=1;
	cin>>s;
	cin>>m;
	int n=s.length();
	for(int kanan=0;kanan<n;kanan++){
		tambah(s[kanan]);
		while(beda==m){
			jawab=min(jawab,kanan-kiri+1);
			kurang(s[kiri]);
			kiri++;
		}
	}
	cout<<jawab;
}
