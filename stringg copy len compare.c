#include<stdio.h>
#include<string.h>
/*int main(){
char fname[]="palak ";
char lname[20]="joshiii";
//printf("%d",strlen(name));
/*strcat(fname,lname);
printf("%s",fname);*/


//compare
int main(){
char a[10];
printf("enter string");
gets(a);
char b[10];
printf("enter string");
gets(b);
int c=strcmp(a,b);
if(c==0){
	printf("equal");
}else{
	printf("not equal");
}
}
