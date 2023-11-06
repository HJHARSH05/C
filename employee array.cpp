#include<iostream>
#include<string>
using namespace std;
class student{
private:
string name;
int rollno;
int marks;

public:
int getdata(){
cout<<"enter employee name: ";
cin>>name;
cout<<"enter employee rollno: ";
cin>>rollno;
cout<<"enter the marks: ";
cin>>marks;
}

int putdata(){
cout<<"Roll no is: "<<rollno<<endl;
cout<<"name is: "<<name<<endl;
cout<<"marks is: "<<marks<<endl;
		
}
};
int main(){
student obj[100];
int i,n;
cout<<"Enter no of students: ";
cin>>n;
for (i=0;i<n;i++){
obj[i].getdata();
}
for (i=0;i<n;i++){
obj[i].putdata();
}	

}
