#include<stdio.h>
int main(){
char a;
printf("Enter the character: ");
scanf("%c",&a);
int b=a;
if (b>65 && b<=90){
printf("capital letter");
}else if(b>=97 && b<=122){
printf("small case")
}else if(b>=48 && b<57){
printf("digits")
}
}
