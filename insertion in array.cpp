#include<iostream>
using namespace std;
int main(){
int arr[10],i,item,pos,size;
cout<<"Enter the size: ";
cin>>size;
for(i=0;i<=size-1;i++){
cout<<"enter the element "<<i<<": ";
cin>>arr[i];
}
cout<<"Enter the position for insertion: ";
cin>>pos;
cout<<"enter the element you want to insert: ";
cin>>item;
for(i=size-1;i>=pos-1;i--){
	arr[i+1]=arr[i];	
}
arr[pos-1]=item;
size++;

for(i=0;i<=size-1;i++){
cout<<i+1<<"position is of:  "<<arr[i]<<endl;
}
}
