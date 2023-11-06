#include<stdio.h>
int sum(int num);
int main(){
int num=12345;
printf("%d",sum(num));
}
int sum(int num){
	if (num!=0)
{
	return num%10+sum(num/10);
}else{
	return 0;
}
}

