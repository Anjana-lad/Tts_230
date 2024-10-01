//friend function :
#include<iostream>
using namespace std;
class Sakshi;
class kuldeep{
    int k_money=5000;
    friend int Prakash(kuldeep,Sakshi);
};
class Sakshi{
    int s_money=2000;
    friend int Prakash(kuldeep,Sakshi);
};

int Prakash (kuldeep k,Sakshi s){
    cout<<"Total money="<<k.k_money+s.s_money<<endl;
}
int main(){
    kuldeep k1;
    Sakshi sk;
    Prakash(k1,sk);
}