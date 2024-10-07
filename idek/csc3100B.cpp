#include <iostream>
using namespace std;
		
bool check(int x,bool head[],bool tail[]){
	return head[x]+tail[x]==2;
}
	
int main(){
	int n,q;
	cin>>n>>q;
	bool head[n+5],tail[n+5];
	int index[n+5],array[n+5];
	int l[q+5],r[q+5];
	for(int i=1;i<=n;i++){
		cin>>array[i];
		index[array[i]]=i;
		head[i]=false;
		tail[i]=false;
	}
	for(int i=1;i<=q;i++)cin>>l[i];
	for(int i=1;i<=q;i++)cin>>r[i];
	if(index[l[1]]!=1||index[r[1]]!=n){
		cout<<"0\n";
		return 0;
	}
	for(int i=q;i>=1;i--){	
		int leftPosition=index[l[i]];
		int rightPosition=index[r[i]];
		if(leftPosition>=rightPosition||check(leftPosition,head,tail)||check(rightPosition,head,tail)){
			cout<<"0\n";
			return 0;
		}else{
			for(int j=leftPosition;j<rightPosition;j++){
				head[j]=true;
				tail[j+1]=true;
			}
		}
		if(leftPosition==1&&rightPosition==n&&i!=1){
			cout<<"0\n";
			return 0;
		}
	}
	cout<<"1\n";
	return 0;
}
