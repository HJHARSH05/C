#include<stdio.h>
int main(){
	int n,a,b,c,d,e,revnum;
	printf("enter the number= ");
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	d=n%10;
	n=n/10;
	e=n%10;
	n=n/10;
    revnum=a*10000+b*1000+c*100+d*10+e*1;
    printf("the reversed number is= %d",revnum);
}


