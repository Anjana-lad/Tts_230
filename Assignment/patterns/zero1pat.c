//1
//1 0
//1 0 1
//1 0 1 0
//1 0 1 0 1

// #include<stdio.h>
// int main(){
//     int col,row;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//           if(col%2!=0){
//             printf("1");
//           }
//           else{
//             printf("0");
//           }
            
//         }
//         printf("\n");
//     }
// }
//A
//* *
//B C D
//* * * *
//E F G H I
#include<stdio.h>
int main(){
    int row,col;
    char ch='A';
    for(row=0;row<=5;row++){
        for(col=0;col<=row;col++){
            if(row%2==0){
            printf("%c ",ch++);
            }
        else{
            printf("* ");
        }
    }
    printf("\n");
  }
}