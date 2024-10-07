/*SOAL 1
Masukkan N: 5
1
12
123
1234
12345

SOAL 2
Masukkan N: 5
1
22
333
4444
55555

SOAL 3
Masukkan N: 5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
SOAL 4
Masukkan N:5
A
AB
ABC
ABCD
ABCDE
SOAL 5
---
SOAL 5
Masukkan N: 5
X___X 1 5  1
_X_X_ 2 4  2
__X__ 3 3  3
_X_X_ 4 2  4
X___X 5 1  5
SOAL 6:
Masukkan N: 5
X___X 234
XX__X  34
X_X_X 2 4
X__XX 23
X___X 234
SOAL 6
Masukkan N: 5
H___H
H___H
HHHHH
H___H
H___H  */
#include <iostream>
using namespace std;
int main(){
	int n=5;
	for(int brs=1; brs<=n; brs++) {
  		for(int kol=1; kol<=brs; kol++)
  		cout << kol;
  cout << "\n";
	}
}

