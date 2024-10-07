#include <bits/stdc++.h>
using namespace std;
int n,tMax;
int cows[10005];
bool test(int size){
	int idx=1;
	priority_queue<int> pq;
	for(idx=1;idx<=size;idx++)pq.push(cows[idx]);//put first k
//	cout<<idx<<endl;
	while(idx<=n){
		int add=pq.top()+cows[idx];
		cout<<size<<": "<<add<<endl;
		if(add*-1>tMax)return false;
		idx++;
		pq.pop();
		pq.push(add);		
	}
	int comp;
	while(pq.size()){
		comp=pq.top();
		pq.pop();
	}
//	cout<<comp<<endl;
	if(comp*-1<=tMax)return true;
	else return false;
}
int main(){
	vector<int> v;
	v.push_back(100);
	v.push_back(9);
	cout<<v.end()-v.begin();
}
