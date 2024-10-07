#include <iostream>
#include <string.h> 
using namespace std;
int i;
int t_sno,t_age;
char t_name[20];
float t_gpa;
struct data_f{
	int sno;
	char name[20];
	int age;
	float gpa;
};
struct data_f data[10];
void print(){
	cout<<"No\tSNo\tName\tAge\tGPA\n";
		for(int j=0;j<i;j++){
			cout<<j+1<<"\t";
			cout<<data[j].sno<<"\t";
			cout<<data[j].name<<"\t";
			cout<<data[j].age<<"\t";
			cout<<data[j].gpa<<"\n";
		}
}
void swap(int a,int b){
		t_sno=data[a].sno;
		data[a].sno=data[b].sno;
		data[b].sno=t_sno;
					
		t_age=data[a].age;
		data[a].age=data[b].age;
		data[b].age=t_age;
					
		t_gpa=data[a].gpa;
		data[a].gpa=data[b].gpa;
		data[b].gpa=t_gpa;
					
		strcpy(t_name,data[a].name);
		strcpy(data[a].name,data[b].name);
		strcpy(data[b].name,t_name);
}
int main(){
	int a,n,idx;
	i=0;
	do{
		cout<<"1. Add record\n2. Update record\n3. Display record\n4. Sort (GPA)\n5. Delete\n6. Sort(Name)\n9. Exit\nChoice: ";
		cin>>n;
		if(n!=1&&n!=2&&n!=3&&n!=4&&n!=5&&n!=6&&n!=9){
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
			cout<<"Update SNo: ";
			cin>>a;
			for(int j=0;j<i;j++){
				if(a==data[j].sno){
					idx=j;
					break;
				}
			}
			cout<<"Name\t: "<<data[idx].name<<"--> ";
			cin>>data[idx].name;
			cout<<"Age\t: "<<data[idx].age<<"--> ";
			cin>>data[idx].age;
			cout<<"GPA\t: "<<data[idx].gpa<<"--> ";
			cin>>data[idx].gpa;
		}else if(n==3){
			print();
		}else if(n==4){
			for(int j=0;j<i;j++){
				for(int k=0;k<i-1;k++){
					if(data[k].gpa<data[k+1].gpa){
						swap(k,k+1);
					}
				}
			}
			print();
		}else if(n==5){
			cout<<"Delete SNo: ";
			cin>>a;
			for(int j=0;j<i;j++){
				if(a==data[j].sno){
					idx=j;
					break;
				}
			}
			strcpy(data[idx].name,"-");
			data[idx].sno=0;
			data[idx].age=0;
			data[idx].gpa=0;
		}else if(n==6){
			for(int j=0;j<i;j++){
				for(int k=0;k<i-1;k++){
					if (strcmp (data[k].name,data[k+1].name)>0){
						swap(k,k+1);
					}
				}
			}
			print();
		}
	else if(n==9){
		break;
		}
	}while(n!=9);
}
