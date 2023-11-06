#include<stdio.h>
int sum(int n);
int main(){
int n;
printf("enter the number");
scanf("%d",&n);
printf("sum of the num is %d",sum(n));
}
int sum(int n){
	if (n>1){
		return n+sum(n-1);
	}else{
		return 1;
	}
}
