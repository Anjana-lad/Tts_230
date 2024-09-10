//loops are used to print the executable statements multiple times until the given condition is true.
// 3 parts of the loop .
// initialization
// test condition
// increment/decrement
/*
two types of loop :
entry controlled loop: for loop and while loop
exit controlled loop:  do..while loop.

*/
// program to print 1 to 10 using for loop
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=0;i<=10;i++){
//         printf("%d \n",i);
//     }
// }

// using while loop for printing 10 to 1
// #include<stdio.h>
// int main(){
//     int i=10; //initilization 

// while(i>0){
//     printf("%d \n ",i);
//     i--;
// }
// }

// using do..while loop
#include<stdio.h>
int main(){
    int i=20;
    do{
        printf("%d \n",i);
        i++;
    }while(i<=21);
}