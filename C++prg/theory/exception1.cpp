//exception handling:=
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age:";
    cin>>age;
    try{
        if(age>18){
            cout<<"Able to vote.";
        }
        else{
            throw(age);
        }
    }
    catch(int age){
        cout<<"Age is not valid.."<<endl;
    }
}