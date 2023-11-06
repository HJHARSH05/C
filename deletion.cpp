#include<iostream>
using namespace std;
int main(){
int i,pos;
int arr[]={2,5,8,9,15};
int size=sizeof(arr)/sizeof(int);
cout<<"Enter the position for deletion: ";
cin>>pos;
for(i=pos-1;i<=size-1;i++){
	arr[i]=arr[i+1];	
}
size--;

for(i=0;i<=size-1;i++){
cout<<i+1<<"position is of:  "<<arr[i]<<endl;
}
}
