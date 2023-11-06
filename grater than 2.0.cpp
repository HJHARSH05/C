#include<iostream>
using namespace std;
class demo{
int a,b;
void getvalue(){
cout<<"Enter the value";
cin>>a>>b;
}
friend void func(demo);
};
void func(demo x){
x.getvalue();
if(x.a>x.b){
cout<<"A is greater";
}else{
cout<<"B is greater";
}
}
int main(){
	demo obj;
	func(obj);
}
