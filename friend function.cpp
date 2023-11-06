/*#include<iostream>
using namespace std;
class coding{//declare
	private: //we used to access this through public function
	int a,b,c;
	friend int ffunction(coding);	//now we'll pass values through frnd function
};
int ffunction(coding x){//define
x.a=20;
x.b=30;
x.c=x.a+x.b;
return x.c;

}
int main(){
coding obj;
cout<<ffunction(obj);
}*/


/*#include<iostream>
using namespace std;
class xyz;
class abc{
	private:
	int a;
	friend int ffunction(abc,xyz);
};
class xyz{
	private:
	int b;
	friend int ffunction(abc,xyz);
};

int ffunction(abc x,xyz y){
x.a=5;
y.b=8;
return x.a+y.b;
}
int main(){
abc obj1;
xyz obj2;
cout<<ffunction(obj1,obj2);
}*/


/*#include<iostream>
using namespace std;
class palak{

	int a,b,c;
	friend int manan(palak);	
};
int manan(palak p){// x is object
p.a=5;
p.b=6;
p.c=p.a+p.b;
return p.c;
}

int main(){
palak obj;
cout<<manan(obj);
}*/


/*#include<iostream>
using namespace std;
class palak{
	int a,b;
	friend void com(palak);
};
friend void com(palak p){
cout<<"enter the first number: ";
cin>>p.a;
cout<<"enter the second number: ";
cin>>p.b;
if (a>b){
	cout<<"less";
}
	else{
   cout<<"greater";
	}
}
int main(){
palak obj;
cout<<com(obj);
}*/











