#include<stdio.h>
int main(){
int a,b;
char c;

printf("Enter the operation:");
printf("press 1 for addition \n");
printf("press 2 for subtraction \n");
printf("press 3 for multiplication \n");
printf("press 4 for divison \n");
printf("press 5 for \n");

scanf("%c",&c);
printf("enter the value of a: ");
scanf("%d",&a);
printf("enter the value of b: ");
scanf("%d",&b);
switch (c){
case '1':
printf("sum is %d",a+b);
break;
case '2':
printf("diff is %d",a-b);
break;
case '3':
printf("product is %d",a*b);
break;
case '4':
printf("quotient is %d",a/b);
break;
case '5':
exit(0);	
}
}



























