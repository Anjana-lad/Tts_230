//recursion : The process in which function is call int its own function for the further computation. // function calling itself.
// #include<stdio.h>
// int sum(int num){
//     if(num==1){
//         return 1;
//     }
//     else{
//         return num+sum(num-1);
//     }
// }
// int main(){
//     int n;
//     printf("Enter number:");
//     scanf("%d",&n);
//     printf("Total of n number=%d",sum(n));
// }
// factorial 5!=5*4*3*2*1=120

#include<stdio.h>
int fact(int num){
    if(num==1){
        return 1;
    }
    else{
        return num*fact(num-1);
    }
}
int main(){
    int n;
    printf("Enter number;");
    scanf("%d",&n);
    printf("Factorial=%d",fact(n));   
}