#include<iostream>
using namespace std;

class b{
	private:
	int x;
	friend void ffunction(a,b);
};
class a{
	private:
	int y;
	friend void ffunction(a,b);
};

void ffunction(a m,b n){
m.y=5;
n.x=8;
if(m.y>n.x){
cout<<"A is greater";
}else{
cout<<"B is greater";
};
}
int main(){
a obj1;
b obj2;
cout<<ffunction(obj1,obj2);
}
