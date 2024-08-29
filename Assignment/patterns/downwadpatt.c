// * * * * *
// * * * *
// * * *
// * *
//  *
// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=0;row<5;row++){
//         for(col=5;col>row;col--){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

/*
 * * * * *
  * * * *
   * * *
    * *
     *
*/
// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=5;row>=1;row--){
//         for(space=5-1;space>=row;space--){
//             printf(" ");
//         }
//         for(col=row;col>=1;col--){
//             printf(" *");
//         }
//     printf("\n");
//     }
// }

/*
         *
        * *
       * * *
      * * * *
     * * * * *
*/
// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=0;row<5;row++){
//         for(space =5;space>=row;space--){
//             printf(" ");
//         }
//         for(col=0;col<=row;col++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
/*
             *
           * * *
         * * * * *
       * * * * * * * 
     * * * * * * * * *
*/
#include<stdio.h>
int main(){
    int row,col,space;
    int n=5;
    for(row=1;row<=n;row++){
        for(space=n-1;space>=row;space--){
            printf("  ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("* ");
        }
        printf("\n");
    } 
}