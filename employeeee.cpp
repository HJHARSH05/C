#include<iostream>
#include<string>
using namespace std;
class employee{
private:
string name;
int age;

public:
int getdata(){
cout<<"enter employee name: ";
cin>>name;
cout<<"enter the age: ";
cin>>age;
}

int putdata(){
cout<<"Name is: "<<name<<endl;
cout<<"age is: "<<age<<endl;
}
};
int main(){
int i,n;
cout<<"enter the number of employee";
cin>>n;
employee obj[n];

for (i=0;i<n;i++){
obj[i].getdata();
}
for (i=0;i<n;i++){
obj[i].putdata();
}	

}
