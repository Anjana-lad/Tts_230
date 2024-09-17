//entry controlled loops in which condition is checked at entry of the loop
//program to print reverse number. 
#include<iostream>
using namespace std;
int main(){
    int num,rem,rev=0;
    cout<<"Enter number:";
    cin>>num;
    while(num!=0){
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    cout<<"Reverse num="<<rev<<endl;

}
/*
1. wap a  to check whether the given number is even or odd using if else in c++.
2. wa menu driven program to calculate area of circle,rectangle,triangle.
3. write a program to calculate factorial using loop.
4. write a prg to calculate fibonacci series.
5. w a p tp check whether number is palindrome using do...while loop.
6. WAP to sort an array an ascending order.
*/