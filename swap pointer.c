#include<stdio.h>
int main(){
int a=20;
int *p=&a;
int b=30;
int *q=&b;
int t;
t=*p;
*p=*q;
*q=t;
printf("value of a is %d",a);
printf("value of b is %d",b);

}

