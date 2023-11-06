#include<stdio.h>
int main(){
  int fact=1,a,i;
  printf("enter the num");
  scanf("%d",&a);
  for(i=1;i<=a;i++){
  	fact=fact*i;
  }
  printf("the factorial of num is",fact);
}
