#include<stdio.h>
int factorial(int n);
int main(){
int n;
printf("enter the number");
scanf("%d",&n);
printf("factorial of a no is %d",factorial(n));
}
int factorial(int n){
	if (n>=1){
		return n*factorial(n-1);
	}else{
		return 1;
	}
}

