#include<iostream>
using namespace std;
class check{
private:
int a;
public:
int getdata(){
cout<<"Enter the no: ";
cin>>a;
}
int putdata(){
if (a%2==0){
	cout<<"its an even number";
}else{
	cout<<"its odd number";
}
}
};
int main(){
check obj;
obj.getdata();
obj.putdata();
}


