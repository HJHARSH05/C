#include<iostream>
using namespace std;
int stack[10],n=10,top=-1;
void push(){
	int val;
	if(top==n-1){
		cout<<"Stack Overflow";
	}
	else{
		cout<<"Insert the element: ";
		cin>>val;
		top++;
		stack[top]=val;
	}
}
int main(){
	push();
}































































