// aggregation: It is aProcess in which we can access the memberof one class in other with the help of reference variable.So it is call HAS-A relationship with other class.
#include<iostream>
using namespace std;
class Address{
   public:
       string city,state;
    public:
    Address(string c,string s){
    this->city=c;
    this->state=s;
    }
};
class Employee{
private:
    Address *add;
    public:
    int eid;
    string name;
    public:
    Employee(int id,string nm,Address *add){
        this->eid=id;
        this->name=nm;
        this->add=add;
      }
    void display(){
        cout<<"Employee details\n";
        cout<<"Emp_id="<<eid<<"\n Name="<<name<<"\n City="<<add->city<<"\n State="<<add->state<<endl;
    }
};
int main(){
    Address ad("surat","Gujarat");
    Employee emp(1,"Kevin",&ad);
    emp.display();
}