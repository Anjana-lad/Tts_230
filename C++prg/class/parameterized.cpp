//parameterized constructor : constructor having parameters
#include<iostream>
using namespace std;
class shape{
    private:
    int len,width;
    public:
    shape(int l,int w){  //parametrized constructor
        len=l;
        width=w;
    }
    int area(){
        return  len * width;
    }
};
int main(){
    int a,b;
    cout<<"Enter length and width:";
    cin>>a>>b;  
    shape sp(50,7);  // static 
    cout<<"Area of shape="<<sp.area()<<"m"<<endl;
    shape sp1(a,b);  // dynamic
    cout<<"Area of shape="<<sp1.area()<<"m"<<endl;
}