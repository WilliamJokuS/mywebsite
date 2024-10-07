#include <iostream>
 
using namespace std;
 
char mark[] = {'X', 'O'};
int x_win = 0, o_win = 0, draw = 0;
int dif=0;
char ties[100][3][4];
bool win(char board[3][4])
{
	for (int i = 0; i < 3; i++) {
		if (board[i][1] != '\0' && board[i][0] == board[i][1] && board[i][2] == board[i][1]) {
			return true;
		}
		if (board[i][1] != '\0' && board[i][1] == board[i][3] && board[i][2] == board[i][1]) {
			return true;
		}
		if (board[0][i] != '\0' && board[0][i] == board[1][i] && board[2][i] == board[1][i]) {
			return true;
		}
		if (board[0][3] != '\0' && board[0][3] == board[1][3] && board[2][3] == board[1][3]) {
			return true;
		}
	}
 
	if (board[0][0] != '\0' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
		return true;
	}
 
	if (board[0][2] != '\0' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
		return true;
	}
	
 	if (board[0][1] != '\0' && board[0][1] == board[1][2] && board[1][2] == board[2][3]) {
		return true;
	}
 
	if (board[0][3] != '\0' && board[0][3] == board[1][2] && board[1][2] == board[2][1]) {
		return true;
	}
	return false;
}
 
int move(char board[3][4], int turn, int chances)
{
	if (win(board)) {
		return 1;
	}
	if (chances == 12) {
		int cnt=0;
		for(int k=0;k<=dif;k++){
			bool same=true;
			for(int i=0;i<3;i++){
				if(same==false)break;
				for(int j=0;j<4;j++){
					if(board[i][j]!=ties[k][i][j]){
						same=false;
						cnt++;
						break;
					}
				}
			}
		}
		if(cnt==dif+1){
			for(int i=0;i<3;i++){
				for(int j=0;j<4;j++){
					ties[dif][i][j]=board[i][j];
					cout<<board[i][j]<<" ";
				}
				cout<<endl;
			}
			cout<<endl;
			dif++;
		}
		return 1;
	}
 
	int ans = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (board[i][j] == '\0') {
				board[i][j] = mark[turn];
				ans += move(board, 1 - turn, chances + 1);
				board[i][j] = '\0';
			}
		}
	}
 
	return ans;
}
 
int main() {
	char board[3][4] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0','\0','\0','\0'};
	
 
	int ans = move(board, 0, 0);
 
	cout << dif<<endl;
 
	return 0;
}
