//check weather person age is right for vote or not?
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age:";
    cin>>age;
    if(age>18){
        cout<<"Able to vote:"<<endl;
    }
    else{
        cout<<"Not able to vote."<<endl;
    }
}