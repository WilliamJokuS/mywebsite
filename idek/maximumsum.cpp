#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int arr[200005];
    int m,n,maks=-INT_MAX;;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		maks=max(maks,arr[i]);
	}
    vector<ll> prefixSum(n+1, 0);
    for (int i = 0; i < n; i++) {
        prefixSum[i + 1] = prefixSum[i] + arr[i];
    }

    deque<int> dq,dq2;
    ll maxSum = -INT_MAX;

    for (int i = 0; i < prefixSum.size(); i++) {
        
        if (!dq.empty() && i - dq.front() > m) {
            dq.pop_front();
        }
        while (!dq.empty() && prefixSum[dq.back()] > prefixSum[i]) {
//        	cout<<i<<" "<<dq.back()<<endl;
            dq.pop_back();
        }
        dq.push_back(i);

        if (i!=dq.front()&&prefixSum[i] - prefixSum[dq.front()] > maxSum) {
            maxSum = prefixSum[i] - prefixSum[dq.front()];
        }
    }
	if(maxSum==-INT_MAX)cout<<maks<<endl;
    else cout<<maxSum<<endl;

    return 0;
}

