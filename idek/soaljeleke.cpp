#include <bits/stdc++.h>
using namespace std;
int gajah(int a){
int c = 0;
while (a % 2 == 0){
c++;
a /= 2;
}
return c;
}
int arr[10] = {2, 12, 9, 6, 3, 24, 16, 36, 9, 18};
int semut(int a, int b){
if (a == b) return gajah(arr[a]);
int c = (a + b) / 2;
return semut(a, c) + semut(c+1, b);
}
int main(){
	for(int i=)
	cout<<semut(1,9);
}
