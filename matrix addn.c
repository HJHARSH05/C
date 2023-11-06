#include<stdio.h>
int main(){
int a[2][2],b[2][2],c[2][2],i,j;
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("enter the element a[%d][%d]:",i,j);
scanf("%d",&a[i][j]);
}
}
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("enter the element b[%d][%d]:",i,j);
scanf("%d",&b[i][j]);
}
}
printf("A matrix is\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("\t%d",a[i][j]);
}
printf("\n");
}
printf("B matrix is\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("\t%d",b[i][j]);
}
printf("\n");
}
printf("c matrix is\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
c[i][j]=a[i][j]+b[i][j];
printf("\t%d",c[i][j]);
}
}
}



