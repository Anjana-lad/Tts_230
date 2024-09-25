// multi-level inheritance: in this we will have one derived class which will be the base class for another derived class.
#include<iostream>
using namespace std;
class employee{
    public:
    int eid;
    string name;
    public:
    void data(){
        cout<<"Enter id:";
        cin>>eid;
        cout<<"Enter name:";
        cin.ignore();
        getline(cin, name);
    }
    void show(){
        cout<<"Employee details:"<<endl;
        cout<<"Eid="<<eid<<"\n Name:"<<name<<endl;
    }
};
class Task:public employee{
    public:
    int t1,t2;
    public:
    void get_task(){
        data();
        cout<<"Enter tasks:";
        cin>>t1>>t2;
    }
    void show_t(){
        show();
        cout<<"T1="<<t1<<"\n T2="<<t2<<endl;
    }
};
class Appraisal :public Task{
    public:
    int total_t;
    public:
    void get_all(){ 
        get_task();
        total_t=t1+t2;
    }
    void show_all(){
        show_t();
        cout<<"Total task="<<total_t<<endl;
    }
};
int main(){
    Appraisal app;
    app.get_all();
    app.show_all();
}