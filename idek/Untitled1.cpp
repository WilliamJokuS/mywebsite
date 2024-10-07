#include <iostream>
using namespace std;
struct data_f{
	int sno;
	char name[20];
	int age;
	float gpa;
};
int main(){
	int i,a,n;
	struct data_f data[10];
		i=0;
		do{
			cout<<"1. Add record\n2. Update record\n3. Display record\n9. Exit\nChoice: ";
			cin>>n;
			if(n!=1&&n!=2&&n!=3&&n!=9){
				cout<<"Invalid\n";
			}else if(n==1){
				cout<<"SNo\t: ";
				cin>>data[i].sno;
				cout<<"Name\t: ";
				cin>>data[i].name;
				cout<<"Age\t: ";
				cin>>data[i].age;
				cout<<"GPA\t: ";
				cin>>data[i].gpa;
				i++;
			}else if(n==2){
				cout<<"Update No: ";
				cin>>a;
				cout<<"Name\t: "<<data[a-1].name<<"--> ";
				cin>>data[a-1].name;
				cout<<"Age\t: "<<data[a-1].age<<"--> ";
				cin>>data[a-1].age;
				cout<<"GPA\t: "<<data[a-1].gpa<<"--> ";
				cin>>data[a-1].gpa;
			}else if(n==3){
				cout<<"SNo\tName\tAge\tGPA\n";
				for(int j=0;j<i;j++){
					cout<<data[j].sno<<"\t";
					cout<<data[j].name<<"\t";
					cout<<data[j].age<<"\t";
					cout<<data[j].gpa<<"\n";//
				}
			}else if(n==9){
				break;
			}
		}while(n!=9);
}
