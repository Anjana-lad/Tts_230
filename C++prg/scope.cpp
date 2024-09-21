// program to use global variable .
#include<iostream>
#include<iomanip>
using namespace std;
int num=50;   // global variable
int main(){
//     int num=30,num2=10;
//     cout<<"Add="<<num+num2<<endl<<"3 number"<<num+::num+num2<<endl; 
//    // cout<<"# numbers add="<<num+num2+::num<<endl;
//         // setw() : it is used to set width for a particular variables
//         int a,b,c;
//         cout<<"Enter numbers:";
//         cin>>a>>b>>c;
//         cout<<"a="<<setw(5)<<a<<endl<<"b="<<setw(5)<<b<<endl<<"c="<<setw(5)<<c<<endl;

        // setprecision():= It is used with float values.
        float f=27.36547;
        cout<<"F="<<f<<endl;
        cout<<"f="<<setprecision(5)<<f<<endl;
        cout<<fixed;
        cout<<"f="<<setprecision(9)<<f<<endl;

        //setfill(char) : it is used to fill the char in front of the given number.
        int n=14258;
        cout<<"n="<<setw(10)<<setfill('x')<<n<<endl; 
}