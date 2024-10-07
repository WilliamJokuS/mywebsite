#include <stdio.h>
#include <string.h>
int main(){
	int kurs,harga,cc;
	float diskon;
	char tipe[30];
	int i;
	kurs=10000;
	char mobil[4][5][30]=	{{"Toyota Xenia","10000","15","50"},
							 {"Toyota Alphard", "20000","30","25"},
							 {"Toyota Altis","30000","18","50"},
							 {"Toyota Innova", "40000","20","75"}};
	for(i=0;i<4;i++){
		strcpy(tipe,mobil[i][0]);
		cc=atoi(mobil[i][2]);
		harga=atoi(mobil[i][1])*kurs;
		diskon=(float)harga*(float)atoi(mobil[i][3])/1000;
		printf("%s",tipe);
		printf("\tRp%.0f",(float)harga-diskon);
		printf("\t%d\n",cc*100);
	}
}
