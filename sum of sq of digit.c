#include<stdio.h>
int main(){
	int i=1,num,sum=0,r;
	printf("enter the num");
	scanf("%d",&num);
	while(num!=0){
		r=num%10;
		sum=sum+r*r;
		num=num/10;
	}
	printf("the sum of square of digits is %d",sum);
}
