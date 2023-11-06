#include <iostream>
using namespace std;
class harsh{
    int a[2][2],b[2][2],c[2][2],i,j,k;
      public:
      void getdata(){
          for(i=0;i<2;i++){
              for(j=0;j<2;j++){
        cout<<"enter the element a[%d][%d]"<<i<<j;
        cin>>a[i][j];
              }
          }
            for(i=0;i<2;i++){
              for(j=0;j<2;j++){
        cout<<"enter the element b[%d][%d]"<<i<<j;
        cin>>b[i][j];
    }}}

    int mult(){
          for(i=0;i<2;i++){
       for(j=0;j<2;j++){
           c[i][j]=0;
             for(k=0;k<2;k++){
                 c[i][j]+=a[i][k]*b[k][j];
             }}}
    cout<<" multiplication of a and b matrix is c matrix: "<<endl;
        for(i=0;i<2;i++){
       for(j=0;j<2;j++){
           cout<<c[i][j]<<"  ";   
       } 
       cout<<endl;
    }
}
    void putdata(){
        cout<<"a matrix is: "<<endl;
        for(i=0;i<2;i++){
       for(j=0;j<2;j++){
           cout<<a[i][j]<<"  ";
       } 
            cout<<endl;
        }
    cout<<"b matrix is: "<<endl;
        for(i=0;i<2;i++){
       for(j=0;j<2;j++){
           cout<<b[i][j]<<"  ";
       }
                   cout<<endl;
        }
    }
    };
 int main() {   
     harsh obj;
     obj.getdata();
    obj.mult();
}
