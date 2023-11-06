//function
#include<stdio.h>
//int pow(int ,int );
int pow(int a,int b){
	int pow=1,i;
	for(i=0;i<b;i++){
		pow=a*pow;
	}
	return pow;
}
int main(){
	int a,b;
	printf("enter the base value ");
	scanf("%d",&a);
	printf("enter the exponential value ");
	scanf("%d",&b);
	printf("the answer is %d",pow(a,b));
}

