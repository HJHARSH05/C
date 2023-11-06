#include<stdio.h>
int average(int [],int);
int main(){
int marks[]={98,97,96,89,91};
int size=sizeof(marks)/sizeof(marks[0]);
int avg=average(marks,size);
printf("%d",avg);
}
int average(int marks[],int s){
int sum=0,ag,i;
for(i=0;i<s;i++){
	sum=sum+marks[i];
}
ag=sum/s;
return ag;
}
