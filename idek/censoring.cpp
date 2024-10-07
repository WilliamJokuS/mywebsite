#include <bits/stdc++.h>
#define HM 1000000007
#define HA 100000007
#define HB 101
using namespace std;
int hext(int h, int ch) {
  return ((long long)h * HA + ch + HB) % HM;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	string s,censor;
  	cin >> s >> censor;
	int hashCensor = 0;
    for (int j=0;j<censor.size(); j++) {
      hashCensor = hext(hashCensor, censor[j] - 'a');
    }
  	string R;
  	vector<int> H(1, 0);
  	vector<int> HAPW(1, 1);
  	for (int i=0;i<s.size(); i++) {
    	int ch = s[i] - 'a';
    	H.push_back(hext(H.back(), ch));
    	HAPW.push_back((1ll * HAPW.back() * HA) % HM);
    	R += s[i];
    	int len=censor.size();
    	if(len>R.size())continue;
    	int hsub = (1ll * H[R.size() - len] * HAPW[len]) % HM;
      	int hsh = (HM + H.back() - hsub) % HM;
      	if(hsh==hashCensor){
      		//if(R.substr(R.size()-len)==censor){
      			R.resize(R.size() - len);
            	H.resize(H.size() - len);
            	HAPW.resize(HAPW.size() - len);
			//}	
		}
	}
	cout << R << endl;
  	return 0;
}
