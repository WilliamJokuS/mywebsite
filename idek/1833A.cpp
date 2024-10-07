#include <bits/stdc++.h>
using namespace std;
bool note[10][10];
int main(){
    int t;
    cin>>t;
    while (t--) {
    	memset(note,false,sizeof note);
		int ans=0,n;
        string s;
        
        cin>>n;
        cin>>s;
        for(int i=0;i<n-1;i++){
 	          if(!note[s[i]-'a'][s[i+1]-'a']){
                note[s[i]-'a'][s[i+1]-'a']=true;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    
}