#include<stdio.h>
int main(){
int bs,da,hra,gs;
printf("Enter the basic salary: ");
scanf("%d",&bs);
da=bs*.40;
hra=bs*.20;
gs=bs+da+hra;
printf("Basic salary is %d\n",bs);
printf("Dearness allowance is %d\n",da);
printf("House rent allowance is %d\n",hra);
printf("Gross salary is %d\n",gs);
}
