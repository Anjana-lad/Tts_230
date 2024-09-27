 // Diamond problem in hybrid inheritance. in which it is that if we want to access the member of grand class in child class then (this inheritance contain multilevel and multiple inheritance.)
//    P
//   q r
//    s
// virtual keyword :
#include<iostream>
using namespace std;
int p,q,r,s;
class P{
    public:
    int getpq(){
        cout<<"Enter p:";
        cin>>p;
        cout<<"Enter q=";
        cin>>q;
    }
};
class Q: virtual public P{
    public:
    int getr(){
      //  getpq();
        cout<<"Enter r:";
        cin>>r;
    }
};
class R: virtual public P{
    public:
    int gets(){
       // getpq();
        cout<<"Enter s:";
        cin>>s;
    }
};
class S:public Q,R{
    public:
    int total;
    public:
    int get_all(){
        getpq();
        getr();
        gets();
        total=p+q+r+s;
        cout<<"Result="<<total<<endl;
    }
};
int main(){
    S s;
    s.get_all();
} 