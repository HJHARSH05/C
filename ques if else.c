#include<stdio.h>
/*int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if (a>=0){
		printf("%d",a);
	}
	else
	printf("%d",(-1*a));
}*/

int sum(int *,int *);
int sum(int *p,int *q){
	int sum;
	sum=*p+*q;
	printf("%d",sum);
}
int main(){
int a=5;
int b=15;
printf("%d",sum(&a,&b));
}
	


