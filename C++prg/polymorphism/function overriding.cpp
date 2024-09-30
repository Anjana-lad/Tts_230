// function overriding : having same function name in inherited class.
#include<iostream>
using namespace std;
class A{
    public:
   virtual void display(){
        cout<<"I am in class A"<<endl;
    }
};
class B:public A{
    public:
    void display(){
        cout<<"I am in class B"<<endl;
    }
};
int main(){
    A *a;   // pointer of base class
    B b;  // object of child class
    a=&b;  // referencing  pointer to object;
    a->display();
    b.display();
}