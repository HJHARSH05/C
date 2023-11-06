#include<stdio.h>
int main(){
	int i,j,rows;
	printf("enter the number of rows");
	scanf("%d",&rows);
	for (i=0;i<=rows;i++){
	for (j=rows-i;j>0;j--){
	printf("*");
	}
	printf("\n");
}
}
