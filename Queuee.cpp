#include<iostream>
using namespace std;
int queue[10],n=10,front=-1,rear=-1;
void insert(){
	int val;
	if(rear==n-1){
		cout<<"Queue is full";
	}
	else{
			front=0;
			cout<<"Insert the element in queue";
			cin>>val;
			rear++;
			queue[rear]=val;
		}
	}
void deleted(){
	if(front==-1 ||front>rear){
		cout<<"Queue Underflow";
	}
	else{
		cout<<"Element deleted from queue";
		front++;
	}
}
void display(){
	if(front==-1){
		cout<<"Queue is empty";
	}else{
		for(int i=front;i<=rear;i++){
			cout<<queue[i]<<" "<<endl;
		}
	}
}
int main(){
int ch;
char ans;
cout<<"Y/N";
cin>>ans;
while(ans=='y'){
cout<<"1)Press 1 for Insertion"<<endl<<"2)Press 2 for Deletion"<<endl<<"3)Press 3 for Display"<<endl;
cin>>ch;
if(ch==1){
	insert();
}
else if(ch==2){
	deleted();
}
else if(ch==3){
	display();
}
else{
	cout<<"Enter a valid choice.";
}

}
}


