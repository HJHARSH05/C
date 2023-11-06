#include<stdio.h>
int main(){
	int a,b,i,sol=1;
	printf("enter the value of a: ");
	scanf("%d",&a);
	printf("enter the value of b: ");
	scanf("%d",&b);
	for(i=0;i<b;i++){
		sol=sol*a;
	}
	printf("the soln is %d",sol);
		
	}
	

