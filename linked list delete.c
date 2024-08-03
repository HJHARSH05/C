#include<stdlib.h>
#include<stdio.h>
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
printf("no of nodes is %d",count);
}

struct node *delAtIndex(struct node *first,int index){
    struct node *prev;
	struct node *p=first;
	int i=0;
	while(i!=index-1){
	    prev=p;
		p=p->next;
		i++;
	}
    prev->next=p->next;
	free(p);
	return first;
 }
 
struct node *delAtEnd(struct node *first){
    struct node *prev;
	struct node *p=first;
	while(p->next!=NULL){
	    prev=p;
		p=p->next;

	}
    prev->next=NULL;
	free(p);
	return first;
 }
 
 struct node *delAtFirst(struct node *first){
	struct node *p=first;
    first=first->next;
	free(p);

	return first;
 }
 
 
 int main(){
struct node *first,*second,*third;
first=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));

first->data=15;
first->next=second;
second->data=20;
second->next=third;
third->data=25;
third->next=NULL;

// delAtIndex(first,2);
// delAtEnd(first);
//first=delAtFirst(first);

traversing(first);
