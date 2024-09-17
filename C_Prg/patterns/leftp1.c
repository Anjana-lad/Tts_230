//        *
//      * *
//    * * *
//  * * * *
//* * * * *

// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=1;row<=5;row++){
//         for(space=5-1;space>=row;space--){
//             printf("  ");
//         }
//         for(col=1;col<=row;col++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
//        1
//      1 2
//    1 2 3
//  1 2 3 4
//1 2 3 4 5
// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=1;row<=5;row++){
//         for(space=5-row;space>=1;space--){
//             printf("  ");
//         }
//         for(col=1;col<=row;col++){
//             printf("%d ",col);
//         }
//         printf("\n");
//     }
// }

//        A
//      B B
//    C C C
//  D D D D
//E E E E E
// #include<stdio.h>
// int main(){
//     int row,col,space;
//     char ch='A';
//     for(row=1;row<=5;row++){
//         for(space=5-row;space>=1;space--){
//             printf(" ");
//         }
//         for(col=1;col<=row;col++){
//             printf("%c",ch);
            
//         }
//         ch++; 
//         printf("\n");
//     }
// }

//        A
//      B A
//    C B A
//  D C B A
//E D C B A

// #include<stdio.h>
// int main(){
//   int row,col,space; 
//  char ch='A';
//   for(row=0;row<5;row++){
//     for(space=0;space<5-row;space++){
//         printf(" ");
//     }
//     for(col=row;col>=0;col--){
//         printf("%c",ch+col);
//     }
  
//     printf("\n");
//   } 
// }

//        5
//      4 5
//    3 4 5
//  2 3 4 5
//1 2 3 4 5
// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=5;row>=1;row--){
//         for(space=row-1;space>=1;space--){
//             printf(" ");
//         }
//         for(col=row;col<=5;col++){
//             printf("%d",col);
//         }
//     printf("\n");
//     }
// }
#include<stdio.h>
int main(){
    int row,col;
    for(row=5;row>=1;row--){
        for(col=1;col<=5;col++){
            if(row<=col){
           printf(" %d",col);
        }
        else{
            printf("  ");
        }
    }  
     printf("\n");
    }
}