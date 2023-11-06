#include<stdio.h>
int main(){
/*int a=20;
int *p=&a;//* is dereference operator //& tells address //%p for pointer address
int **q=&p;
printf("value of a is %d\n",a);
printf("address of a is %x\n",&a);
printf("address of a is %x\n",p);
printf("value of a is %d\n",*p);
printf("\n%x",&p);
printf("\n%x",q);
printf("\n%d",*(*q));*/


int x=10;
int *ptr=&x;
printf("\n%d",x);
x=x+30;
printf("\n%d",*ptr);
*ptr=*ptr+40;
printf("\n%d",x);
}







