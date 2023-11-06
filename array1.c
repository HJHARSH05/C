//sum of elements of array
/*#include<stdio.h>
int main(){
int arr[]={1,2,3,4};
int i,sum=0;
int len=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<len;i++){
	sum=sum+arr[i];
}
printf("%d",sum);
}*/







//positive-neg
/*#include<stdio.h>
int main(){
int arr[]={12,14,17,-36,74},i,pno=0,nno=0,ono=0,eno=0;
for(i=0;i<5;i++){
if(arr[i]%2==0){
	eno++;
}else{
	ono++;
}if (arr[i]>0){
	pno++;
}else{
	nno++;
}
}
printf("%d\n",eno);
printf("%d\n",pno);
printf("%d\n",nno);
printf("%d\n",ono);
}*/



//addn of 2 array
/*#include<stdio.h>
int main(){
int a[3],b[3],c[3],i;
for(i=0;i<3;i++){
printf("enter the element: ");
scanf("%d",&a[i]);
}
for(i=0;i<3;i++){
printf("enter the element: ");
scanf("%d",&b[i]);
}
printf("sum of element: ");
for(i=0;i<3;i++){
	
c[i]=a[i]+b[i];
printf("\t%d",c[i]);
}
}*/



//merging of 2 array
/*#include<iostream>
using namespace std;
int main(){
int i,pos;
int arr1[10]={2,5,8,9,15};
int arr2[10]={1,4,9};
int arr3[10]={};
for(i=0;i<5;i++){
	arr3[i]=arr1[i];
}
for(i=0;i<4;i++){
	arr3[5+i]=arr2[i];
}
for(i=0;i<8;i++){
	printf("%d",arr3[i]);
}
}*/
