#include <bits/stdc++.h>
using namespace std;
struct stop{
	int dis;
	int f;
};
stop stops[10005];
bool cmp(stop x,stop y){
	return x.dis>y.dis;
}
int main(){
    int n,t;
    int l,p;
    cin>>t;
    while(t--){
    	cin>>n;
        for(int i=1;i<=n;i++){
            cin>>stops[i].dis>>stops[i].f;
        }
        sort(stops+1,stops+1+n,cmp);
        cin>>l>>p;
        priority_queue<int> pq;
        pq.push(p);
        int ans=0,idx=1;
        while(l>0&&!pq.empty()){
            ans++;
            l-=pq.top();
            pq.pop();
            while(stops[idx].dis>=l&&idx<=n){
                pq.push(stops[t].f);
                idx++;
            }
        }
        if(l>0)cout<<"-1\n";
        else cout<<ans-1<<"\n";
    }
    return 0;
}
