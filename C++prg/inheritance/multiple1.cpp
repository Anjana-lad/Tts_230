// multiple inheritance has the problem the if both the class has same name for member function then the problems occur.
#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"I m in class A"<<endl;
    }
};
class B{
    public:
    void show(){
        cout<<"I am in class B"<<endl;
    }
};
class C :public A,B{
    public:
    void show(){
       A::show();
      B:: show();
        cout<<"I am in class C"<<endl;
    }
};
int main(){
    C c;
    c.show();   
}