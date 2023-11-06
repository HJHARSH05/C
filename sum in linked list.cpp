#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * next;
};
void traversing(struct node *ptr){
	int count=0;
	while (ptr!=NULL){
	printf("%d\n",ptr->data);
	ptr=ptr->next;
	count++;
}
}
int sum(struct node *p){
	int sum=0;
	while(p!=NULL){
		sum=sum+p->data;
		p=p->next;
	}
	return sum;
}
int main(){
struct node *first,*second,*third,*forth;
first=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));
forth=(struct node *)malloc(sizeof(struct node));

first->data=15;
first->next=second;
second->data=20;
second->next=third;
third->data=25;
third->next=forth;
forth->data=30;
forth->next=NULL;

printf("%d",sum(first));
traversing(first);
}
