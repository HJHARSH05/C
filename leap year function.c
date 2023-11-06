#include<stdio.h>

int leapYearFunction(int y);
int leapYearFunction(int y){
if(y%4==0 && y%100!=0 || y%400==0){
	printf("leap Year");
}else{
	print("Not a leap year");
}
}
int main(){
int y;
printf("enter the year");
scanf("%d",&y);
leapYearFunction(y);
}


