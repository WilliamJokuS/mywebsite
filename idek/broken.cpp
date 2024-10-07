#include <bits/stdc++.h>
using namespace std;
void process(char s[]){
	int n=strlen(s);
	deque<char> text;
    deque<char>::iterator it = text.end();
    for(int i = 0; i <n; i++) {
        if(s[i] == '[')it = text.begin();
		else if (s[i] == ']') it = text.end(); 
		else{
            it = text.insert(it, s[i]);
            it++;
        }
    }
    for (auto it :text) {
        cout<<it;
    }
    cout<<endl;
}
int main(){
//	freopen("wokowk.txt","w",stdout);
	char s[100005];
	while (scanf("%s", s) != EOF) {
		process(s);
	}
}
