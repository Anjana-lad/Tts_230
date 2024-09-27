// hybrid inheritance: it is the combination of more then one type of inheritance. 
#include<iostream>
using namespace std;
class P{
    public:
    int p;
    public:
    int getp(){
        cout<<"Enter p:";
        cin>>p;
    }
};
class Q:public P{
    public:
    int q;
    public:
    int getq(){
        getp();
        cout<<"enter q:";
        cin>>q;
    }
};
class R{
    public:
    int r;
    public:
    int getr(){
        cout<<"enter r:";
        cin>>r;
    }
};
class S: public Q,R{
    public:
    int total;
    public:
    void all(){
        getq();
        getr();
        total=p+q+r;
        cout<<"total="<<total<<endl;
    }
};
int main(){
    S s;
    s.all();
}