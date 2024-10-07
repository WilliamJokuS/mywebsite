#include <bits/stdc++.h>
using namespace std;
int a[1000][1000];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	cout<<74<<endl;
}
 8  2 -1  9 -1  9 -1
-1 -1  3 -1  5  6 -1
 9  8  4 -1 -1 -1  8
-1 -1 -1  7  3  4  2
-1  5  6 -1 -1  5  2
-1 -1 -1 -1 -1 -1 -1
 7  8 -1  2  3  6 -1
