#include<iostream>
using namespace std;
int main(){
int i,key,j;
int arr[]={4,15,7,8,2};
for(i=1;i<5;i++){
	key=arr[i];
	j=i-1;
while(j>=0&&arr[j]>key){
	arr[j+1]=arr[j];
	j--;
}
arr[j+1]=key;
}
for(i=0;i<5;i++){
	cout<<arr[i]<<",";
}
}
