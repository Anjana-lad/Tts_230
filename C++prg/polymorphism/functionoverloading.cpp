// function overloading : function having same name but different parameters or different types of parameter.
#include<iostream>
using namespace std;
class fun{
    public:
    int add_fun(int a,int b){
    return a+b;
    }
    int add_fun(int a,int b,int c){
        return a+b+c;
    }
    int add_fun(double a,double b){
        return a+b;
    }
};
int main(){
    fun ff;
    cout<<"function with 2 parameters="<<ff.add_fun(10,20)<<endl;
    cout<<"function with double type="<<ff.add_fun(10,3)<<endl;
    cout<<"function with 3 parameters="<<ff.add_fun(50,70,30)<<endl;
}