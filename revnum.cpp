#include<iostream>
using namespace std;
class check{
private:
int a,r,n,rev;
public:
int getdata(){
cout<<"Enter the no: ";
cin>>a;
}
int putdata(){
	while(a!=0){
		r=a%10;
		rev=rev*10+r;
		a=a/10;
		
	}
	cout<<"the rev of num is"<<rev;
	}
};
int main(){
check obj;
obj.getdata();
obj.putdata();
}

