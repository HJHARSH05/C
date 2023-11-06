#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * next;
};
struct node *head=NULL;

void push(int val){
struct node *newNode=malloc(sizeof(struct node));
newNode->data=val;
newNode->next=head;
head=newNode;
}

void display(){
	struct node *temp=top;
	temp=top;
	if(temp==NULL){
		printf("Empty stack");
	}
	else{
		while(temp!=NULL){
			printf("\n%d",temp->data);
			temp=temp->next;
		}
	}
}
void pop(int top){
	struct node *temp=top;
	top=top->next;
	printf("%d is the popped element",top->data);
	free(temp);
}
void peak(){
	struct node *temp=top;
	if(top==NULL){
		printf("Empty stack");
	}
	else{
		printf("%d is the peak element",top->data);
	}
}
void count(){
	int count=0;
	struct node *temp=top;
	while(temp!=NULL){
			count++;
			temp=temp->next;
		}
}
int main(){
push(10);
push(20);
push(90);
count();
}
