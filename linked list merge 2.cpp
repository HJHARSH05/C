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
void merge(struct node *first,struct node *fifth){
	struct node *p=first;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=fifth;
	while(p->next!=NULL){
		printf("%d\n",p->data);
		p=p->next;
	}
}
int main(){
struct node *first,*second,*third,*forth,*fifth,*sixth,*seventh,*eighth;
first=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));
forth=(struct node *)malloc(sizeof(struct node));
fifth=(struct node *)malloc(sizeof(struct node));
sixth=(struct node *)malloc(sizeof(struct node));
seventh=(struct node *)malloc(sizeof(struct node));
eighth=(struct node *)malloc(sizeof(struct node));
first->data=15;
first->next=second;
second->data=20;
second->next=third;
third->data=25;
third->next=forth;
forth->data=30;
forth->next=fifth;
fifth->data=35;
fifth->next=sixth;
sixth->data=40;
sixth->next=seventh;
seventh->data=45;
seventh->next=eighth;
eighth->data=50;
eighth->next=NULL;
merge(first,fifth);
traversing(first);
}


	









