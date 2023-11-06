#include<stdio.h>
#include<stdlib.h>
struct stack{
int size;
int top;
int *arr;
};
int isEmpty(struct stack *ptr){
if(ptr->top==-1){
return 1;
}
else{
return 0;
}
}
int isFull(struct stack *ptr){
if(ptr->top==ptr->size-1){
return 1;
}
else{
return 0;
}
}
void push(struct stack *ptr,int val){
if (isFull(ptr)){
printf("stack overflow\n");
}
else{
int val=ptr->arr[ptr->top];
ptr->top++;
ptr->arr[ptr->top]=val;
}
}
int pop(struct stack *ptr){
if (isEmpty(ptr)){
printf("stack underflow\n");
}
else{
int val=ptr->arr[ptr->top];
ptr->top--;
return val;
}
}
int peak(struct stack *ptr,int i){
int v=ptr->top-i + 1;
if (v<0){
printf("not a valid position ");
return -1;
}
else{
return ptr->arr[v];
}
}

int main(){
struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
sp->size=10;
sp->top=-1;
sp->arr=(int *)malloc(sp->size*sizeof(int));
/*if (isEmpty(sp)==1){
printf("stack is empty");

}
else{
printf("stack has some values");
}
if (isFull(sp)==1){
printf("stack is full");
}
else{
printf("stack has some values");
}*/
printf("%d\n",isFull(sp));
printf("%d\n",isEmpty(sp));
push(sp,50);
push(sp,55);
push(sp,60);
push(sp,70);
printf("%d\n",isFull(sp));
printf("%d\n",isEmpty(sp));
printf("popped value is %d",pop(sp));
printf("popped value is %d",pop(sp));
int j;
for(j=1;j<=sp->top+1;j++){
printf("\nelement is at position %d is %d",j,peak(sp,j));
}
}


