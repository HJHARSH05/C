//static member
#include<iostream>
using namespace std;
class demo{
int x,y;
static int z;
public:
	void getdata(){
	cout<<"Enter the value: "<<endl;
	cin>>x>>y;
	}
	void putdata(){
	cout<<"value of x is:"<<x<<"value of y is: "<<y<<endl;
	cout<<"static value is: "<<z<<endl;
	}
};
int demo::z;
int main(){
demo aa,bb;
aa.getdata();
bb.getdata();
aa.putdata();
bb.putdata();
}
