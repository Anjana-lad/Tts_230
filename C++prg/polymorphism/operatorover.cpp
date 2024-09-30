// operator overloading : giving a special meaning to the existing operator.
/*syntax: 
    classname operator (operator symbol)(classname &object){}
*/

#include<iostream>
using namespace std;
class overload{
    public:
    int num;
    public:
    overload (){
        cout<<"Enter number:";
        cin>>num;
    }
    int operator >(overload &obj){
        if (num> obj.num){
            return num;
        }
        else{
            return obj.num;
        }
    }
    int operator ==(overload &obj1){
        if(num==obj1.num){
            cout<<num<<"both are same"<<endl;
        }
        else{
            cout<<"not same";
        }
    }
};
int main(){
    overload ov1;
    overload ov2;
    int r= (ov1 > ov2) && (ov1==ov2);
    cout<<"result="<<r;
}