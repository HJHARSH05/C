#include<iostream>
using namespace std;
class a{
private:
int x;
friend class b;
};
class b{
public:
	palak(){
	friend int func(b,a);
	}
};
friend int func(b ,a y){
	cout<<"enter the value of x";
	cin>>y.x;
}
int main(){
	b.obj
	cout<<func(b,a);
}



