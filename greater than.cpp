#include<iostream>
using namespace std;
class demo{
int a,b;
friend void func(demo);
};
void func(demo x){
x.a=5;
x.b=6;
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
