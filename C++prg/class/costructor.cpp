// constructor : It is on type of special member function as its name is same as class name.
#include<iostream>
using namespace std;
class cube{
    public:
    int side;
    cube(){  // constructor
    side=7;
    }
    void show(){
        cout<<"Cube of give number="<<side*side*side<<endl;
    }
};
int main(){
    cube cb;
    cb.show();
}