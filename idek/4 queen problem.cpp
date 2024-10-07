#include <iostream>
using namespace std;
int baris[10];
int grid[10][10];
pair<int,int> poss[100][10];
int ans;
int idx=1;
void isi(int b){
//	cout<<b;
	if(b==9){
		bool valid=true;
		for(int i=1;i<=8;i++){
			for(int j=1+i;j<=8;j++){
				if(baris[i]==baris[j])valid=false;
				int horizontal=abs(baris[i]-baris[j]);
				int vertikal=j-i;
				if(horizontal==vertikal)valid=false;//cek diag
			}
		}
		if(valid==true){
			int i=1;
			for(int j=1;j<=8;j++){
				for(int k=1;k<=8;k++){
					if(k==baris[j]){
						//cout<<"*";
						poss[idx][i]=make_pair(j,k);
						i++;	
					}//else cout<<".";
				}
				//cout<<endl;
			}
			//cout<<endl;
			idx++;
		}
		return;
	}
	for(int kolom=1;kolom<=8;kolom++){
		baris[b]=kolom;
		isi(b+1);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	isi(1);
	while(t--){
		ans=0;
		for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++){
				cin>>grid[i][j];
			}
		}
		for(int i=1;i<=idx;i++){
			int sum=0;
			for(int j=1;j<=8;j++){
				sum+=grid[poss[i][j].first][poss[i][j].second];
			}
			ans=max(ans,sum);
		}
		cout<<ans<<endl;
	}
}
