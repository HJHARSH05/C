#include <iostream>
#include<math.h>
using namespace std;
class interest{
int P,r,t,CI;
public:
int getdata(){
	cout<<"Enter the principal amount: ";
	cin>>P;
	cout<<"Enter the rate of interest: ";
	cin>>r;
	cout<<"Enter the time period: ";
	cin>>t;
}	
int putdata(){
	CI=P*pow((1+r),t);
	cout<<"the compound interest is: "<<CI;
}
};
int main(){
	interest obj;
	obj.getdata();
	obj.putdata();
}
