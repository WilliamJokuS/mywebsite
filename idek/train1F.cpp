#include <bits/stdc++.h>
using namespace std;
int n,c,x;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    priority_queue<int> pq1;
    priority_queue<int> pq2;
	int n,tmp;
	double med=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(x>=med)pq2.push(x*-1);
		else pq1.push(x);
		int size1=pq1.size();
		int size2=pq2.size();
		if(abs(size1-size2)==2){
			if(size1>size2){
				tmp=pq1.top();
				pq1.pop();
				pq2.push(tmp*-1);
			}else{
				tmp=pq2.top()*-1;
				pq2.pop();
				pq1.push(tmp);
			}
			med=((double)pq1.top()+(double)(pq2.top()*-1))/2;
		}
		else if(size1==size2)med=((double)pq1.top()+(double)(pq2.top()*-1))/2;
		else if(size1>size2)med=(double)pq1.top();
		else med=(double)pq2.top()*-1;
		printf("%.1lf\n",med);
	}
}
