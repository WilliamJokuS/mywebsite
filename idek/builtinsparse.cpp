#include <bits/stdc++.h>
using namespace std;

typedef struct{
	int i,j;
	int value;
}triple;
int main() {
 	vector <triple> sparse;
 	sparse.push_back({1,2,3});
 	
 	cout<<sparse[0].i<<endl;
 	cout<<sparse[0].j<<endl;
 	cout<<sparse[0].value<<endl;
    return 0;
}

