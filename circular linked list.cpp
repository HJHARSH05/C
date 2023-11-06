//traversing

//#include<stdio.h>
//#include<stdlib.h>
//struct Node{
//	int data;
//	struct Node *next;
//};
//void traversing(struct Node *first){
//	struct Node *p=first;
//	do{
//		printf("Element is %d\n",p->data);
//		p=p->next;
//	}while(p!=first);
//}
//int main(){
//struct Node *first;
//struct Node *second;
//struct Node *third;
//struct Node *fourth;
//first=(struct Node*)malloc(sizeof(struct Node));
//second=(struct Node*)malloc(sizeof(struct Node));
//third=(struct Node*)malloc(sizeof(struct Node));
//fourth=(struct Node*)malloc(sizeof(struct Node));
//first->data=7;
//first->next=second;
//second->data=45;
//second->next=third;
//third->data=67;
//third->next=fourth;
//fourth->data=55;
//fourth->next=first;
//traversing(first);
//}


#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
void traversing(struct Node *first){
	struct Node *p=first;
	do{
		printf("Element is %d\n",p->data);
		p=p->next;
	}while(p!=first);
}
struct Node *addAtBeginning(struct Node *first,int data,int index){
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node *p=first->next;
	while(p->next!=first){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=first;
	first=ptr;
	return first;
}
int main(){
struct Node *first;
struct Node *second;
struct Node *third;
struct Node *fourth;
first=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
fourth=(struct Node*)malloc(sizeof(struct Node));
first->data=7;
first->next=second;
second->data=45;
second->next=third;
third->data=67;
third->next=fourth;
fourth->data=55;
fourth->next=first;
printf("before insertion at circular linked list:\n");
traversing(first);
printf("After insertion at circular linked list:\n");
first=addAtBeginning(first,50,2);

traversing(first);
}
