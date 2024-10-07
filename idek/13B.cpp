#include <bits/stdc++.h>
using namespace std;
bool ada[105];
int main(){
	int n,k,q;
	string in,s;
	getline(cin,s);
	cin>>n>>k>>q;
	cin.ignore();
	if(s=="Subsoal 5"){
		int l=1,r=1000,ret;
		while(l<=r){
	  		int mid=(l+r)/2;
	  		cout<<1<<" "<<mid<<"\n";
	  		fflush(stdout);
	  		getline(cin,in);
	  		if(in=="tidak")r=mid-1;
	  		else if(in=="bisajadi"){
	  			l=mid+1;
				ret=mid;	
			}
			else if(in=="ya")return 0;
		}
		cout<<ret<<flush;
		for(int i=1;i<=ret;i++){
			cout<<" "<<i<<flush;
		}
		cout<<"\n";
		fflush(stdout);
		getline(cin,in);
	}else if(s=="Subsoal 2"||s=="Subsoal 6"){
		int cnt=n;
		memset(ada,true,sizeof ada);
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				cout<<2<<" "<<i<<" "<<j<<"\n";
				fflush(stdout);
				getline(cin,in);
				if(in=="tidak"){
					if(ada[i]){
						ada[i]=false;
						cnt--;
					}
					if(ada[j]){
						ada[j]=false;
						cnt--;
					}
					break;
				}else if(in=="ya")return 0;
			}
		}
		cout<<cnt;
		for(int i=1;i<=n;i++){
			if(ada[i])cout<<" "<<i<<flush;
		}
		cout<<"\n";
		fflush(stdout);
		getline(cin,in);
		if(in=="ya")return 0;
		for(int i=1;i<=n;i++){
			if(!ada[i])continue;
			cout<<cnt-1<<flush;
			for(int j=1;j<=n;j++){
				if(j==i||!ada[j])continue;
				cout<<" "<<j<<flush;
			}
			cout<<"\n";
			fflush(stdout);
			getline(cin,in);
			if(in=="iya")return 0;
		}
	}else{
		int cnt=0;
		for(int i=1;i<=n;i++){
			cout<<1<<" "<<i<<"\n";
			fflush(stdout);
	  		getline(cin,in);
	  		if(in=="bisajadi"){
	  			ada[i]=true;
	  			cnt++;
			  }
	  		else if(in=="ya")return 0;
		}
		cout<<cnt<<flush;
		for(int i=1;i<=n;i++){
			if(ada[i])cout<<" "<<i<<flush;
		}
		cout<<"\n";
		fflush(stdout);
		getline(cin,in);
	}
  return 0;
}
