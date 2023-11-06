#include<iostream>
using namespace std;
int stack[10],n=10,top=-1;
void push(){
	int val;
	if(top==n-1){
		cout<<"Stack Overflow"<<endl;
	}
	else{
		cout<<"Insert the element: "<<endl;
		cin>>val;
		top++;
		stack[top]=val;
	}
}
void pop(){
	if(top==-1){
		cout<<"Stack Underflow"<<endl;
	}
	else{
		cout<<"popped value is: "<<stack[top]<<endl;
		top--;
	}
}
void display(){
	if(top==-1){
		cout<<"Stack is empty"<<endl;
	}
	else{
		for(int i=top;i>=0;i--){
			cout<<stack[i]<<endl;
		}
	}
}
int main(){
int ch;
char ans;
cout<<"Y/N";
cin>>ans;
while(ans=='y'){
cout<<"1)Press 1 for Insertion"<<endl<<"2)Press 2 for Deletion"<<endl<<"3)Press 3 for Display"<<endl<<"4)Press 4 for Exit"<<endl;
cin>>ch;
if(ch==1){
	push();
}
else if(ch==2){
	pop();
}
else if(ch==3){
	display();
}
else if(ch==4){
	break;
}
else{
	cout<<"Enter a valid choice.";
}

}
}

