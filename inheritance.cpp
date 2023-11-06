//Inheritance
/*#include<iostream>
using namespace std;
class A{
protected:
int x;
public:
void geta(){
cout<<"Enter the no: ";
cin>>x;
}
};
class B:public A{
protected:
int y;
public:
void getb(){
cout<<"Enter a no: ";
cin>>y;
}
void add(){
cout<<"addition is: "<<x+y;
}
};
int main(){
B aa;
aa.geta();
aa.getb();
aa.add();
}*/


//Inheritance of multiple class
/*#include<iostream>
using namespace std;
class A{
protected:
int x;
public:
void geta(){
cout<<"Enter the no: ";
cin>>x;
}
};
class B{
protected:
int y;
public:
void getb(){
cout<<"Enter a no: ";
cin>>y;
}};
class C:public A,public B{
public :
void add(){
cout<<"addition is: "<<x+y;
}};

int main(){
C aa;
aa.geta();
aa.getb();
aa.add();
}*/


//multi-level inheritance
/*#include<iostream>
using namespace std;
class A{
protected:
int x;
public:
void geta(){
cout<<"Enter the no: ";
cin>>x;
}
};
class B:public A{
protected:
int y;
public:
void getb(){
cout<<"Enter a no: ";
cin>>y;
}};
class C:public B{
public :
void add(){
cout<<"addition is: "<<x+y;
}};

int main(){
C aa;
aa.geta();
aa.getb();
aa.add();
}*/


/*#include<iostream>
using namespace std;
class A{
protected:
int x;
public:
void geta(){
cout<<"Enter the roll no: ";
cin>>x;
}
};
class B:public A{
protected:
int y,z;
public:
void getb(){
cout<<"Enter science marks: ";
cin>>y;
cout<<"Enter maths marks: ";
cin>>z;
}};
class C:public B{
public :
void add(){
cout<<"the roll no "<<x<<" has got total "<<y+z<<" marks";
}};

int main(){
C aa;
aa.geta();
aa.getb();
aa.add();
}*/

//heirarchial
/*#include<iostream>
using namespace std;
class A{
public:
	void printa(){
		cout<<"Inside class A";
	}
};
class B:public A{
public:
	void printb(){
		cout<<"Inside class B";
	}
};
class C:public A{
public:
	void printc(){
		cout<<"Inside class B";
	}
};
int main(){
B bb;C cc;
bb.printa();
bb.printb();
cc.printa();
cc.printc();
}*/

/*#include<iostream>
using namespace std;
class A{
public:
	void printa(){
		cout<<"Inside class A";
	}
};
class B:public A{
public:
	void printb(){
		cout<<"Inside class B";
	}
};
class C{
public:
	void printc(){
		cout<<"Inside class B";
	}
};
class D:public B, public C{
public:
	void printe(){
		cout<<"Inside class D";
	}
};
int main(){
D bb;
bb.printa();
bb.printb();
bb.printc();
bb.printe();
}*/


#include<iostream>
using namespace std;
class A{
public:
	void printa(){
		cout<<"Inside class A";
	}
};
class B:public A{
public:
	void printa(){
		cout<<"Inside class B";
	}
};

int main(){
B bb;
bb.A::printa();
bb.printa();

}



















