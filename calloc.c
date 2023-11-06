#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i,*ptr;
printf("enter the total no of values: ");
scanf("%d",&n);
ptr=(int *)calloc(n,sizeof(int));
printf("enter the values");
for(i=0;i<n;i++){
	scanf("%d",(ptr+i));
}
printf("\n the entered values is: ");
for(i=0;i<n;i++){
	printf("%d\t",*(ptr+i));
	printf("%d\n",(ptr+i));
}
free(ptr);
}
