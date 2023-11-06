#include<stdio.h>
int main(){
char str[]={'a','b','c','d','e','\0'};
char str2[10]={'a','b','c','d','e','\0'};
char str3[]="abcde";
char str4[10]="abcde";

char str5[10];
printf("enter the string: ");
gets(str5);
//printf("%s",str5);
//puts(str5);
//fgets(str5,6,stdin);
printf("%10.5s",str5);

}
