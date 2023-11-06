#include<iostream>
using namespace std;
class salary{
private:
int bs,ts,l,ods,wd;
public:
int getdata(){
cout<<"enter the basic salary: ";
cin>>bs;
cout<<"enter the num of leaves: ";
cin>>l;

}
int putdata(){
	ods=bs/30;
	wd=30-l;
	ts=wd*ods;

    cout<<"the total salary is: "<<ts;
}
};
int main(){
salary obj;
obj.getdata();
obj.putdata();
}
