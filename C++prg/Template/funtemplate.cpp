// function template:
/*syntax:
template <typename variable>
body for template.
*/
#include<iostream>
using namespace std;
template <typename t>
t mymax(t a, t b){
   if (a>b) {
   return a;
   }
   else{
    return b;
   }
}

int main(){
   cout<<"Integer: "<< mymax<int>(10,20)<<endl;
    cout<<"character: "<< mymax<char>('y','s')<<endl;
    cout<<"float: "<< mymax<float>(27.6,20.6)<<endl;
}