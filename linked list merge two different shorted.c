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
struct node* merge(struct node* a, struct node* b) {
    struct node* f;
    struct node* l;

    if (a->data < b->data) {
        f = l = a;
        a = a->next;
    } else {
        f = l = b;
        b = b->next;
    }

    while (a != NULL && b != NULL) {
        if (a->data < b->data) {
            l->next = a;
            l = a;
            a = a->next;
        } else {
            l->next = b;
            l = b;
            b = b->next;
        }
    }

    if (a != NULL) {
        l->next = a;
    } else {
        l->next = b;
    }

    return f;
}
int main(){
struct node *first,*second,*third,*forth,*fifth,*sixth,*seventh,*eighth;
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

fifth=(struct node *)malloc(sizeof(struct node));
sixth=(struct node *)malloc(sizeof(struct node));
seventh=(struct node *)malloc(sizeof(struct node));
eighth=(struct node *)malloc(sizeof(struct node));
fifth->data=17;
fifth->next=sixth;
sixth->data=19;
sixth->next=seventh;
seventh->data=45;
seventh->next=eighth;
eighth->data=50;
eighth->next=NULL;
struct node* mergedList = merge(first, fifth);
traversing(mergedList);
}

