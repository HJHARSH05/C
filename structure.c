#include<stdio.h>
int main(){
struct book{
	int pages;
	char name;
	float price;
};
struct book b1,b2;
printf("enter the name: ");
scanf("%c",&b1.name);
printf("enter the pages: ");
scanf("%d",&b1.pages);
printf("enter the price: ");
scanf("%f",&b1.price);
printf("enter the name: ");
scanf("%c",&b2.name);
printf("enter the pages: ");
scanf("%d",&b2.pages);
printf("enter the price: ");
scanf("%f",&b2.price);

printf("%d,%f,%c",b1.pages,b2.price,b2.name);

}
