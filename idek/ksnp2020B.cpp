#include <bits/stdc++.h>
using namespace std;
int cnt[30],n;
int main(){
	string s;
	cin>>n;
	cin>>s;
	for(int i=0;i<s.size();i++){
		cnt[s[i]-'A'+1]++;
	}
	sort(cnt+1,cnt+27,greater<int>());
//	for(int i=1;i<=26;i++){
//		cout<<cnt[i]<<endl;
//	}
	if(cnt[3]<1){
		cout<<-1<<endl;
		return 0;
	}
	int ans=cnt[3]*3;
	if(cnt[2]>cnt[3])ans++;
	if(cnt[1]>cnt[3])ans++;
	cout<<ans<<endl;
	
}
