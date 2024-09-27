//heriarichical inheritance: in which we have one base class and more then one child class for it.
#include<iostream>
using namespace std;
class shape{
    public:
    string name;

    public:
        void getname(){
            cout<<"Enter name :";
            cin>>name;
        }
        void show(){
            cout<<"Shape name="<<name<<endl;
        }
};
class circle:public shape{
    public:
    float radius,area_c;
    public:
    void getr(){
        getname();
        cout<<"Enter radius:";
        cin>>radius;
    }
    int c_area(){
        area_c=3.14*radius*radius;
        show();
        cout<<"Area of circle:"<<area_c<<endl;
    }
};
class rectangle : public shape{
    public:
    int length,width,area_r;
    public:
    void get_lw(){
        getname();
        cout<<"Enter length and width:";
        cin>>length>>width;
    }
    int r_area(){
        show();
        area_r=length*width;
        cout<<"Area of rectangle="<<area_r<<endl;
    }
};
int main(){
    circle cr;
    rectangle rc;
    cr.getr();
    cr.c_area();
    rc.get_lw();
    rc.r_area();
}