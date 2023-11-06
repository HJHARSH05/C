#include<iostream>
using namespace std;
class xyz;
class abc{
	private:
	int a;
	friend int ffunction(abc,xyz);
};
class xyz{
	private:
	int b;
	friend int ffunction(abc,xyz);
};

int ffunction(abc x,xyz y){
x.a=5;
y.b=8;
if(x.a>y.b){
cout<<"A is greater";
}else{
cout<<"B is greater";
}
}
int main(){
abc obj1;
xyz obj2;
cout<<ffunction(obj1,obj2);
}
