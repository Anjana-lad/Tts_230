//constructor overloading: 
#include<iostream>
using namespace std;
class rectangle{
    public:
        int length,width,area;
    public:
        rectangle(); // default
        rectangle(int, int); // parameterized 
        int area_r();
};
rectangle ::rectangle(){
    cout<<"Enter length and width:";
    cin>>length>>width;
}
rectangle :: rectangle(int l, int w){
    length=l;
    width=w;
}
int rectangle :: area_r(){
    area=length* width;
    cout<<"Area of rectangle="<<area<<endl;
}
int main(){
    rectangle rect;  //default
    rect.area_r();
    rectangle rt(5,3);  // parameterized
    rt.area_r();
}

