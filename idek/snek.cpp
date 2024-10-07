#include <bits/stdc++.h>
#include <conio.h>
#include <Windows.h>
using namespace std;
bool gameOver;
int width=20,height=20;
int snakeX,snakeY,fruitX,fruitY,score;
enum eDirection{
	STOP =0,LEFT,RIGHT,UP,DOWN
};
eDirection dir;
void setup(){
	gameOver=false;
	dir=STOP;
	snakeX=width/2;
	snakeY=height/2;
	fruitX=rand()%width;
	fruitY=rand()%height;
	score=0;
}

void draw(){
	system("cls");
	for(int i=0;i<height;i++){
		for(int j=0;j<width;j++){
			if (i==snakeY && j==snakeX)cout<<"O";
			else if(i==fruitX && j==fruitY)cout<<"F";
			else if(i==0||i==width-1||j==0||j==width-1)cout<<"#";
			else cout<<" ";
		}
		cout<<endl;
	}
}

void input(){
	if(_kbhit()){
		switch(_getch()){
			case 'w':
				dir=UP;
				break;
			case 'a':
				dir=LEFT;
				break;
			case 's':
				dir=DOWN;
				break;
			case 'd':
				dir=RIGHT;
				break;
			case 'x':
				gameOver=true;
				break;
		}
	}
}

void logic(){
	switch (dir){
		case LEFT: 
			snakeX--;
			break;
		case RIGHT: 
			snakeX++;
			break;
		case UP: 
			snakeY--;
			break;
		case DOWN: 
			snakeY++;
			break;
		default: break; 			
	}
}

int main(){
	setup();
	while(!gameOver){
		draw();
		input();
		logic();
		Sleep(100);
	}
}


