#include<stdio.h>
void fun(int arr[],int n){
int i;

printf("Inside function: \n");
for(i=0;i<n;i++){
printf("\n%d",arr[i]);
}
}
int main(){
int i;
int arr[]={10,20,30,40,50};
printf("\n%x",arr);
printf("\n%x",arr+1);
printf("\n%x",arr+2);
printf("\n%x",arr+3);
int n=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<n;i++){
printf("\n%d",arr[i]);
}
fun(arr,n);
}



