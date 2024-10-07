#include <bits/stdc++.h>
using namespace std;
int main(){
	int t=10;
	for (int i=1;i<=t;i++) 
        if (i % 3 != 0&&  i % 2 != 0)t = t + 1;
    cout<<t;
}
