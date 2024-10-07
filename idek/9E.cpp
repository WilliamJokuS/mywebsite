#include <bits/stdc++.h>
using namespace std;
int n,k,x;
string goal,tes;
map <string,int> dist;
string tuker(string s,int a,int b){
	for(int i=a;i<=(a+b)/2;i++){
		swap(s[i],s[a+b-i]);
	}
	return s;
}
void bfs(){
	dist[tes]=0;
	queue <string> q;
	q.push(tes);
	while(!q.empty()){
		string curr1=q.front();
		q.pop();
		for(int i=0;i<=n-k;i++){
			string curr2=tuker(curr1,i,i+k-1);
			if(dist.find(curr2)==dist.end()){
				//cout<<curr2<<endl;
				dist[curr2]=dist[curr1]+1;
				q.push(curr2);
			}
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		tes+=x+'0';
		goal+=i+'0';
	}
	cin>>k;
//	cout<<tes<<" "<<goal<<endl;
	bfs();
	if(dist.find(goal)!=dist.end())cout<<dist[goal];
	else cout<<-1;
	cout<<endl;
}
