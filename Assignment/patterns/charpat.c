//character patterns
// A
// B B
// C C C
// D D D D 
// E E E E E
// #include<stdio.h>
// int main(){
//     int row,col;
//     char ch='A';
//     for(row=0;row<=4;row++){
//         for(col=0;col<=row;col++){
//             printf("%c ",ch+row);
//         }
//         printf("\n");
//     }
// }


// PATTERN 2

// 0
// 1 0
// 0 1 0
// 1 0 1 0
// 0 1 0 1 0

#include<stdio.h>
int main(){
    int row,col;
    for(row=0;row<=4;row++){
        for(col=0;col<=row;col++){
            if((row+col)%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
    printf("\n");
    }
}
