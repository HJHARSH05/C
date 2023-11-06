#include<iostream>
using namespace std;
int main(){
	int arr[5],i,size,element;
cout<<"Enter the size: ";
cin>>size;
for(i=0;i<=size-1;i++){
cout<<"enter the "<<i<<" element: ";
cin>>arr[i];
}
cout<<"enter the element to find position of: ";
cin>>element;
	for(i=0;i<size;i++){
		if(arr[i]==element){
			cout<<"position of"<<element<<"is"<<i+1;
		}
	}
	
	
	}
