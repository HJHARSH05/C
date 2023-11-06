#include<iostream>
using namespace std;
class rectangle{
int a,b;
public:


	int putdata(){
	cout<<"the area is"<<a*b;
	}
};
int main(){
rectangle obj;

obj.putdata(2,3);
}
