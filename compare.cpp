#include<iostream>
using namespace std;
class compare{
private:
int a,b;
public:
int getdata(){
cout<<"Enter the no: ";
cin>>a;
cout<<"Enter the no: ";
cin>>b;
}
int putdata(){
if (a>b){
	cout<<"a is greater than b";
}else{
	cout<<"b in greater than a";
}
}
};
int main(){
compare obj;
obj.getdata();
obj.putdata();
}
