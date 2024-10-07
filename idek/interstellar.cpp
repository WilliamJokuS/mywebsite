#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dist[100005];
ll  a[100005];
ll n;
struct Node {
    int wormhole;
    long long cost;
    bool operator>(const Node& other) const {
        return cost > other.cost;
    }
};
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	
	for(int i=1;i<=n;i++){
		dist[i]=INT_MAX;
		cin>>a[i];
	}
	
	priority_queue<Node, vector<Node>, greater<Node> > pq;
    dist[1] = 0;
    pq.push({1, 0});

    while (!pq.empty()) {
        Node current = pq.top();
        pq.pop();
        int i = current.wormhole;
        ll curr_cost = current.cost;
        if (curr_cost > dist[i]) continue;
        for (int j = i + 1; j <= n; ++j) {
            ll travel_cost = (ll)(j - i) * (j - i) * (j - i) * a[j];
            ll new_cost = curr_cost + travel_cost;
            if (new_cost < dist[j]) {
                dist[j] = new_cost;
                pq.push({j, new_cost});
            }
        }
    }
    cout<<dist[n]<<endl;
}
