#include<iostream>
#include<string>
using namespace std;
class add{
	private:
		int a,b;
	public:
		void info(){
		cout<<"enter the first no: ";
		cin>>a;
		cout<<"enter the second no: ";
		cin>>b;
		cout<<"sum is: "<<a+b;
		}
		
};
int main(){
	add s1;//s1 object
	s1.info();
};
