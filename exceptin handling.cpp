//exception handling

//1
/*#include<iostream>
using namespace std;
int main(){
float a,b,c;
try{

cout<<"enter a: ";
cin>>a;
cout<<"enter the value for b: ";
cin>>b;
if (b!=0){
	c=a/b;
	cout<<c;
}
else{
	throw b;
}
}
catch(float e){
	cout<<"Not divisible by 0"<<e;
}
}*/

#include<iostream>
using namespace std;
int main(){
int a;
cout<<"enter a: ";
cin>>a;
try{
if (a==0){
	throw a;
}
else if(a==100){
	throw 'a';
}
else if(a==1000){
	throw 15.5;
}
}



catch(int e){
	cout<<"value is integer"<<e;
}
catch(char e){
	cout<<"value is character "<<e;
}
catch(double e){
	cout<<"value is real "<<e;
}


}
