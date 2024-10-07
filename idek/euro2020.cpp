#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    char team[6][4][20] ={	{"Italy",   "Switzerland",    "Turkey",  "Wales" },
	                      	{"Belgium", "Denmark",        "Finland", "Russia"},
	                    	{"Austria", "Netherland",     "Ukraine" , "Belarus"},
	                    	{"Croatia", "Czech Republic", "England",  "Luxemberg"}
	                    	};
	                      
   int matrix [6][4][8] = { // 0  1  2  3  4   5  6  7
                             { {5, 2, 1, 0, 8,  2, 0, 0},
                               {5, 1, 1, 0, 6,  8, 0, 0},
                               {5, 2, 0, 0, 4,  3, 0, 0},
                               {5, 3, 0, 0, 9,  1, 0, 0} 
                             },
                             { {5, 1, 1, 0, 7, 2, 0, 0},
                               {5, 2, 1, 0, 8, 3, 0, 0},
                               {5, 1, 2, 0, 4, 8, 0, 0},
                               {5, 3, 0, 0, 9, 3, 0, 0} 
                             },
                             { {5, 1, 1, 0, 7, 6, 0, 0},
                               {5, 2, 1, 0, 6, 7, 0, 0},
                               {5, 2, 2, 0, 7, 5, 0, 0},
                               {5, 4, 0, 0, 10, 1, 0, 0} 
                             },
                             { {5, 4, 1, 0, 8, 4, 0, 0},
                               {5, 3, 2, 0, 3, 3, 0, 0},
                               {5, 2, 3, 0, 4, 8, 0, 0},
                               {5, 0, 4, 0, 8, 9, 0, 0}}
                            };
                           
    int g, i, j, k, temp, n=4;     
    
    // calculate L, GD, Pts
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            matrix[i][j][3]=matrix[i][j][0]-matrix[i][j][1]-matrix[i][j][2];
            matrix[i][j][6]=matrix[i][j][4]-matrix[i][j][5];
            matrix[i][j][7]=matrix[i][j][1]*3+matrix[i][j][2];
        }
    }
    
    
    // sort descending
    int tmp;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<4;k++){
                if(matrix[i][j][7]>matrix[i][k][7]){
                    for(int l=0;l<=7;l++){
                        tmp=matrix[i][j][l];
                        matrix[i][j][l]=matrix[i][k][l];
                        matrix[i][k][l]=tmp;
                    }
                }    
            }
        }
    }
    
    // display standings
    char c='A';
    for(int i=0;i<n;i++){
        cout<<"Group "<<char(c+i)<<"\t\t   M   W   D   L   GF  GA  GD  Pts"<<endl;
        for(int j=0;j<4;j++){
            printf("%-18s",team[i][j]);
            for(int k=0;k<8;k++){
                if(matrix[i][j][0]==0)continue;
                printf("%2d  ",matrix[i][j][k]);
            }
            cout<<endl;
        }
        cout<<endl;
    }
    int a,b;
    string semi[4];
    for(int i=0;i<=1;i++){
    	cout<<team[0][i%2]<<" VS "<<team[1][(i+1)%2]<<endl<<"Score : ";
    	cin>>a>>b;
    	if(a>b){
    		semi[i]=team[0][i%2];
		}else{
			semi[i]=team[1][(i+1)%2];
		}
	}
	for(int i=2;i<=3;i++){
    	cout<<team[2][i%2]<<" VS "<<team[3][(i+1)%2]<<endl<<"Score : ";
    	cin>>a>>b;
    	if(a>b){
    		semi[i]=team[2][i%2];
		}else{
			semi[i]=team[3][(i+1)%2];
		}
	}
	cout<<"SEMI FINAL\n";
    cout<<semi[0]<<" VS "<<semi[1]<<endl<<"Score : ";
    cin>>a>>b;
    if(a>b){
    	semi[0]=semi[0];
	}else{
		semi[0]=semi[1];
	}
    cout<<semi[2]<<" VS "<<semi[3]<<endl<<"Score : ";
    cin>>a>>b;
    if(a>b){
    	semi[1]=semi[2];
	}else{
		semi[1]=semi[3];
	}
	cout<<"FINAL"<<endl;
	cout<<semi[0]<<" VS "<<semi[1]<<endl<<"Score : ";
	cin>>a>>b;
	if(a>b){
		cout<<"The Euro 2020 Winner is "<<semi[0]<<endl;
		cout<<"The runner-up is "<<semi[1]<<endl;
	}else{
		cout<<"The Euro 2020 Winner is "<<semi[1]<<endl;
		cout<<"The runner-up is "<<semi[0]<<endl;
	}
    return 0;
}


