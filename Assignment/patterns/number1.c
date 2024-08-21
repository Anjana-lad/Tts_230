// numbers patterns:
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//             printf("%d ",col);
//         }
//     printf("\n");
//     }
// }

//alphabet pattern
// A 
// A B
// A B C 
// A B C D
// A B C D E
#include<stdio.h>
int main(){
    int row,col;
    char ch='A';
    for(row=0;row<=4;row++){
        for(col=0;col<=row;col++){
            printf("%c ",ch+col);
        }
        printf("\n");
    }
}