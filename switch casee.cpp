#include<stdio.h>
int main(){ 
int p,fact=1,a,i,num,count=0;
while(1){

printf("Enter the program:");
printf("press 1 for factorial \n");
printf("press 2 for prime or not \n");
printf("press 3 for odd or even \n");
printf("press 4 for exit \n");
scanf("%d",&p);
switch(p){
case 1:
  printf("enter the num");
  scanf("%d",&a);
  for(i=1;i<=a;i++){
  	fact=fact*i;
  }
  printf("the factorial of num is %d",fact);
  break;
case 2:
printf("Enter the no: ");
scanf("%d",&num);
for(i=1;i<=num;i++){
	if (num%i==0){
	count++;
	}
}
if (count==2){
	printf("no is prime");
}else{
	printf("not a prime no");
}

break;
case 3:
	
printf("Enter an integer: ");
scanf("%d", &num);
if(num % 2==0)
printf("%d is even",num);
else
printf("%d is odd",num);

break;
default:
	exit(0);
}
}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
