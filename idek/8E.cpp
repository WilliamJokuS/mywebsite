#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,w;
int main(){
	ll sum=0;
	deque<int> q;
	cin>>n;
	while(n--){
		cin>>w;
		if(q.empty())q.push_back(w);
		else if(q.back()>w){
			q.push_back(w);
		}else{
			while(!q.empty()&&q.back()<=w){
				q.pop_back();
				if(q.empty())sum+=w;
				else sum+=min(q.back(),w);
			}
			q.push_back(w);
		}
	}
	while(q.size()>1){
		q.pop_back();
		sum+=q.back();
	}
	cout<<sum<<endl;
}
