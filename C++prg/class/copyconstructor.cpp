//copy constructor :
//syntax: classname (const classname &obj_name){body of constructor}
#include<iostream>
using namespace std;
class value{
    private:
    int num1,num2;
    public:
    value(){  // default constructor 
        cout<<"Enter numbers:";
        cin>>num1>>num2;
    }
    value (const value &obj){  //copy constructor
        num1=obj.num1;
        num2=obj.num2;
    }
    void show(){
        cout<<"Num1="<<num1<<endl<<"Num2="<<num2<<endl;
    }
};
int main(){
    value v1;  //obj for default con
    value v2 = v1;    // obj for copy constr
    v2.show();
}

// wAp to print fibonacci series using parametrized constructor.
// wap to multiply 3 numbers using constructor.
// wap to read and display employee details using nested class.
// wap to create mark_sheet of 5 student using constructor.