//single inheritance.:in which we have one parent class an one child class.
//syntax to inherit :
// class child_name : access modifier parent class_name{body of the class}
#include<iostream>
using namespace std;
class person{   //parent class
    public:
    int pid;
    string name;
    public:
    void get_details(){
        cout<<"Enter pid:";
        cin>>pid;
        cout<<"Enter name:";
        cin.ignore();
        getline(cin, name);
    }
    void display(){
        cout<<"Person id:"<<pid<<endl<<"Name="<<name<<endl;
    }
};
class dep: public person{ // child class
    public:
    string dep_nm;
    public:
    void get(){
        get_details();
        cout<<"Enter department name:";
    //   cin.ignore();
        getline(cin, dep_nm);
    }
    void show(){
        display();
        cout<<"Department name="<<dep_nm<<endl;
    }
};
int main(){
  dep dp;
  dp.get();
  dp.show();  
}
// wap of single inheritance having base class "vehicle" with data member color and max_speed and having derived class "car" having member numbers of doors.