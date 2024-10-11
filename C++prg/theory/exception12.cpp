//exception when we have to divide number by zero.
#include<iostream>
using namespace std;
int main(){
    int p,q,r;
    cout<<"Enter numbers:";
    cin>>p>>q>>r;
    try
    {
        if(p-q!=0){
            int res=r/p-q;
            cout<<"Result="<<res<<endl;
        }
        else{
            throw(p-q);
        }
    }
    catch(int t)
    {
        cout<<"division by zero not possible as subtraction to number is "<<t;
    }  
}