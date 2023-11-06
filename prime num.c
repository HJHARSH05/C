#include<stdio.h>
int main(){
int i,num;count=0;
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
}
