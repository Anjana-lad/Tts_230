//class template:
#include<iostream>
using namespace std;
template <class T>
class show{
    public:
    T a,b;
    public:
    show(T p,T q){
        a=p;
        b=q;
    }
    T display(){
    cout<<"A="<<a<<"\n B="<<b<<endl;
    cout<<"Result="<<a+b<<endl;
    }
};
int main(){
    show <float> sh(10.3,52.2);
    sh.display();

}