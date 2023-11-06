#include<iostream>
using namespace std;
class check{
private:
int a,b,i;
public:
int getdata(){
cout<<"Enter the a for range: ";
cin>>a;
cout<<"enter the b for range: ";
cin>>b;
}
int putdata(){
for (i=a;i<=b;i++){
	if (i%2==0){
		cout<<i<<"is an even num";
	}
	else{
		cout<<i<<"is a odd num";
	}
	
}
}
};
int main(){
check obj;
obj.getdata();
obj.putdata();
}
