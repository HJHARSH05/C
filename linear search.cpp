#include<iostream>
using namespace std;
int i,element;
int arr[]={2,5,8,9,15};
int size=sizeof(arr)/sizeof(int);

void search(){
for(i=0;i<size;i++){
	if(arr[i]==element){
	cout<<"The position of element is "<<i+1;
	break;
	}
	else{
	cout<<"Element not found";
	break;
	}

}
}
int main(){
	cout<<"Enter the element: ";
	cin>>element;
	search();
}

