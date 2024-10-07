#include <bits/stdc++.h>
using namespace std;
 
int n;
string s;
 
string convert[] = {"", "", "2", "3", "322", "5", "35", "7", "2227", "2337"};
 
int main() {
	cin >> n >> s;
 
	string ans = "";
	for (int i = 0; i < n; i++) {
		ans += convert[s[i] - '0'];
	}
	sort(ans.rbegin(), ans.rend());
 
	cout << ans << endl;
}
