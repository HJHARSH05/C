#include<stdio.h>
int main(){
int num,i=1;
printf("Enter the no: ");
scanf("%d",&num);
palak:
	printf("\n%d*%d=%d",num,i,num*i);
	i++;
	if (i<=10){
		goto palak;
	}
}


































