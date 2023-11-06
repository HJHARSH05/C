#include<stdio.h>
#include<stdlib.h>
struct queue{
	int size;
	int f;
	int r;
	int * arr;
};
int isEmpty(struct queue *q){
	if(q->f=q->r){
		printf("queue is empty:");
		return 1;
	}
	else{
		return 0;
	}
}
int isFull(struct queue *q){
	if(q->r==q->size-1){
		return 1;
	}
	else{
		return 0;
	}	
}
int main(){
struct queue q;
q.size=10;
q.f=q.r=0;
q.arr=(int*)malloc(q.size*sizeof(int));
isEmpty(&q);
}
