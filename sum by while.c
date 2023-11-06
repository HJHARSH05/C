#include<stdio.h>
int main(){
int i=1,num;
printf("enter the number= ");
scanf("%d",&num);
while(num!=0){
r=num%10;
sum=sum+r;
num=num/10;
}
printf("%d",sum);
}
