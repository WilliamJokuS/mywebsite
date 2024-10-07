#include <iostream>
using namespace std;
int main(){
	int n,m,b;
	cin>>n>>m>>b;
	int a[n+5][m+5];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	int max=-100000;
	int nbatu;
	for(int l1=1;l1<=n;l1++){
		for(int l2=l1;l2<=n;l2++){
			for(int w1=1;w1<=m;w1++){
				for(int w2=w1;w2<=m;w2++){
					int total=0;
					int batu=0;
					for(int i=l1;i<=l2;i++){
						for(int j=w1;j<=w2;j++){
							if(a[i][j]==9999){
								batu++;
								if(batu>b){
									break;
								}
							}
							else{
								total+=a[i][j];
							}
						}
						if(batu>b){
							total=-100000;
							break;
						}
					}
					if(total>max){
						max=total;
						nbatu=batu;
					}
				}
			}
		}
	}
	cout<<max<<" "<<nbatu<<endl;
}

