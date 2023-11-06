#include<stdio.h>
int main(){

float s1,s2,s3;
printf("enter the first side= ");
scanf("%f",&s1);
printf("enter the second side= ");
scanf("%f",&s2);
printf("enter the third side= ");
scanf("%f",&s3);
if((s1+s2)>s3 && (s3+s2)>s1 && (s1+s3)>s2 ){
	printf("its a triangle");
}

else{
	printf("its not a triangle");
}
}
















