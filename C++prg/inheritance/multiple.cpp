//multiple inheritance: in this we have 2 base class ane one child class for them.
#include<iostream>
using namespace std;
class mom{
  protected:
    int m_money;
    public:
    void get_m(){
        cout<<"Enter mom's money:";
        cin>>m_money;
    }
    void show_m(){
        cout<<"Mom's money="<<m_money<<endl;
    }
};
class dad{
    protected:
    int d_money;
    public:
    void get_d(){
        cout<<"Enter dad's money:";
        cin>>d_money;
    }
    void show_d(){
        cout<<"dad's money="<<d_money<<endl;
    }
};
class child :protected mom,dad{
    public:int total;
    public:
    void total_money(){
        get_m();
        get_d();
        total=m_money+d_money;
    }
    void show(){
        show_m();
        show_d();
        cout<<"Total money="<<total<<endl;
    }
};
int main(){
    child ch;
    ch.total_money();
    ch.show();
}