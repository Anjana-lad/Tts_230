// pure virtual function :when having base class method assign to 0;
#include<iostream>
#define pi 3.14
using namespace std;
class shape{
    public:
    virtual int cal_area()=0; // pure virtual function
};
class circle:public shape{
    public:
    int radius,area;
    public:
    int getr(){
        cout<<"Enter radius:";
        cin>>radius;
    }
    int cal_area(){
        area=pi*radius*radius;
        cout<<"Area of circle="<<area<<endl;
    }
};
class rectangle:public shape{
    public:
    int area,length,width;
    public:
    int getlw(){
        cout<<"Enter length and width:";
        cin>>length>>width;
    }
    int cal_area(){
        area=length* width;
        cout<<"Area of rectangle="<<area<<endl;
    }
};

int main(){
    shape *sh;
    circle cr;
    rectangle rc;
    sh=&cr;
    cr.getr();
    sh->cal_area();    
    sh=&rc;
    rc.getlw();
    sh->cal_area();
}