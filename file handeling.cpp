//of stream->creates and writes to files
//if stream->read from a file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream MyFile("Filename.txt");
	MyFile<<"THIS IS A PROGRAM FOR FILE HANDLING";
	MyFile.close();

string myText;
ifstream MyReadFile("Filename.txt");
while(getline(MyReadFile,myText)){
	cout<<myText;
	
	}
MyReadFile.close();
}
