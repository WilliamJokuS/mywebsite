#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
#define pb push_back

bool udh[10];
int tebak[10];
vector<int> ans;
vector<char> out;

void generate(){
	memset(udh,false,sizeof udh);
    while(true){
        int n=rand()%9 +1;
        if(udh[n])continue;
        else{
            ans.pb(n);
            udh[n]=true;
            cout<<n<<" ";
        }
        if(ans.size()==4)break;
    }
    cout<<endl;
}

int main(){
    while(true){
    	int cnt=0;
    	cout<<"New game\n";
    	generate();
    	bool win=false;
    	while(!win){
	       cnt++;
	       cout<<cnt<<". Tebak 4 angka:\n";
	       for(int i=0;i<4;i++)cin>>tebak[i];
	       for(int i=0;i<4;i++){
	           for(int j=0;j<4;j++){
	               if(tebak[i]==ans[j]&&i==j)out.pb('*');
	               else if(tebak[i]==ans[j])out.pb('.');
	           }
	       }
	       sort(out.begin(),out.end());
	       for(int i=0;i<4;i++){
	       		cout<<out[i];
	       		if(i==3&&out[i]=='*')win=true;
		   }
	       cout<<endl;
	       out.clear();
	   }
	}
    
}
