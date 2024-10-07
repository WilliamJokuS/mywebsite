#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,j;
	char c;
	vector <pair<int,int> > tunnel[105];
	while(true){
		cin>>c>>i>>j;
		tunnel[c-'A'].push_back(make_pair(i,j));
		cout<<tunnel[c-'A'][0].first<<" "<<tunnel[c-'A'][0].second;
	}
}
