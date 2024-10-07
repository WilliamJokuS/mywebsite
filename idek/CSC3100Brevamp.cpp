#include <iostream>
using namespace std;
int find(int x, int endpoint[]){
	if(endpoint[x]==x)return x;
	else return endpoint[x]=find(endpoint[x],endpoint);
}
void merge(int x,int y,int endpoint[]){
	x=find(x,endpoint);
	y=find(y,endpoint);
	endpoint[x]=y;
}
bool check(int x,bool head[],bool tail[]){
	return head[x]+tail[x]==2;
}
	
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,q;
	cin>>n>>q;
	bool head[n+5],tail[n+5];
	int index[n+5],array[n+5],endpoint[n+5];
	int l[q+5],r[q+5];
	for(int i=1;i<=n;i++){
		cin>>array[i];
		index[array[i]]=i;
		endpoint[i]=i;
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
			int currL=find(leftPosition,endpoint),stopPosition=rightPosition;
			for(int j=currL;j<rightPosition;j++){
				head[j]=true;
				tail[j+1]=true;
				if(head[j+1]&&tail[j+1]){
					stopPosition=j+1;
					break;
				}
			}
			if(find(stopPosition,endpoint)!=rightPosition){
				cout<<"0\n";
				return 0;
			}
			for(int j=stopPosition;j>currL;j--)merge(j-1,j,endpoint);
		}
		if(leftPosition==1&&rightPosition==n&&i!=1){
			cout<<"0\n";
			return 0;
		}
	}
	cout<<"1\n";
	return 0;
}
