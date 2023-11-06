#include<stdio.h>
int main(){
	int a;
	printf("enter the number=");
	scanf("%d",&a);
int i=1;
while(i<=10){
	printf("%d*%d=%d\n",a,i,a*i);
	i++;
}
}
