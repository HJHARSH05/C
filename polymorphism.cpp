//Polymorphism
//distinguish on the bases of datatype and number of arguments

/*#include<iostream>
using namespace std;
int add(int a,int b);
int add(float a,float b);
int add(int a,int b,int c);
int add(int a,int b){
	return a+b;
}

int add(float a,float b){
	 return a+b;
}
int add(int a,int b,int c){
	 return a+b+c;
}
int main(){
	cout<<add(2,3.5);
}
*/


//operator overloading
#include<iostream>
using namespace std;
class complex{
private: int a,b;
public:
	void getdata(int x,int y){
		a=x;
		b=y;
	}
	void showdata(){
		cout<<a<<endl;
		cout<<b<<endl;
	}
	complex operator +(complex obj){
	complex temp;
	temp.a=a+obj.a;
	temp.b=b+obj.b;
	return (temp);
	}
};
int main(){
complex t1,t2,t3;
t1.getdata(1,7);
t2.getdata(2,4);
//t3=t1+t2
t3=t1.operator +(t2);
t3.showdata();
}



