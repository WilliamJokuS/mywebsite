#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;// 4bit
	Node *next;
};

Node *head=NULL;

int main(){
//	int n=10;
//	printf("%d",n);
	Node *temp=(Node*)malloc(sizeof(Node));
	(*temp).data=2;
	(*temp).next=NULL;
	head=temp;
	printf("%d",head->data);
}
