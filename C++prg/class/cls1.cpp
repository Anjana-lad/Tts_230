// class program.
#include<iostream>
using namespace std;
class Person{    // class name
   private:    // access  specifier/modifier
    int pid;  // dm
    string name; //dm
public:
    void get_data(){   // mF
         cout<<"Enter id:";
        cin>>pid;
        cout<<"Enter name:";
        //cin>>name;
        cin.ignore();
        getline(cin, name);
    }
    void show(){  //MF
        cout<<"Pid="<<pid<<endl<<"Name="<<name<<endl;
    }
};
int main(){
    Person p;  // p is object
    p.get_data(); //with dot operator can access mF;
    p.show();
}