#include<iostream>
#include<string>
using namespace std;
class car{
	private://access specifiers //by default pvt hote h
		string brand;
		string name;
		int year;
	public://access specifiers
		void info(){
		cout<<"enter brand name: ";
		cin>>brand;
		cout<<"enter model name: ";
		cin>>name;
		cout<<"enter manufacturing year: ";
		cin>>year;
		}
		void result(){
		cout<<"your brand name is:"<<brand<<endl;
		cout<<"your model name is:"<<name<<endl;
		cout<<"year is"<<year<<endl;
		
		}
};
int main(){//int main se program chlna shuru hoga
car car1,car2;//car1 is object
car1.info();//car1 call kr raha h info function ko
car2.info();
car1.result();
car2.result();


};
