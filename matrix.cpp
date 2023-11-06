#include<iostream>
using namespace std;
class matrix{
	int a[2][2],b[2][2],i,j,k;
	 public:
	 	void getdata(){
	 		for(i=0;i<2;i++){
	 			for(j=0;j<2;j++){
	 	cout<<"enter the element: "<<i<<j;
		 cin>>a[i][j];			
				 }
			 }
			for(i=0;i<2;i++){
	 			for(j=0;j<2;j++){
	 	cout<<"enter the element: "<<i<<j;
		 cin>>b[i][j]; 
		 }}}
		void putdata(){
			cout<<"A matrix is: "<<endl;
			for(i=0;i<2;i++){
		   for(j=0;j<2;j++){
		   		cout<<a[i][j]<<"  ";
		   }
		        cout<<endl;
			}
			cout<<"B matrix is: "<<endl;
			for(i=0;i<2;i++){
		   for(j=0;j<2;j++){
		   		cout<<b[i][j]<<"  ";
		   }
		        cout<<endl;
			}
		}
 };
 int main(){
 	matrix obj;
 	obj.getdata();
 	obj.putdata();
 }
 
 
 
 
 
 
 
 
 
