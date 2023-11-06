#include<stdio.h>
int main(){
int a=20;
int *p=&a;
int b=30;
int *q=&b;
int sum=*p+*q;
printf("sum is %d",sum);

}

