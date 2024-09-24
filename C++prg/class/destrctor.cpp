// destructor : it destroys the memory which is allocate with the help of constructor.
// same name as class name but preceded with ~ sign.
#include<iostream>
using namespace std;
class add{
    public:
    int a,b;
    public: 
    add(){
        cout<<"Enter number:";
        cin>>a>>b;
    }
    int total(){
        return a+b;
    }
    ~add(){
        cout<<"Destructor called.";
    }
};
int main(){
  add ad;
  cout<<"Total of two numbers="<<ad.total()<<endl;
  cout<<"Calling destructor"<<endl;
}