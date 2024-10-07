#include<stdio.h>
int main(){
	int max,min,nowtime;
	double a,b;
	scanf("%d%d%d",&max,&min,&nowtime);	
	a=max * 1.2;
	b=max *1.5;
	if (nowtime < min)printf("3 10");
	else if (a >= nowtime && nowtime > max){
		printf("3 "); 
		printf("%d",(int)(nowtime - max) * 10);
	}
	else if (b>= nowtime && nowtime> a){
		printf("6 "); 
		//int cnt=(a - max)*10 + (nowtime - a)*20;
		printf("%d",(int)((a - max)*10 + (nowtime - a)*20));
	}else if (b < nowtime){
		int cnt=(a - max)*10 +(b - a)*20+(nowtime - b)*50;
		printf("12 %d",cnt);
	}
	else printf("0 0");

}

