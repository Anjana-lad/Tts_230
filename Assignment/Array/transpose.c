//transpose of array 
/*
1 2 3   1 4
4 5 6   2 5
        3 6

*/
#include<stdio.h>
int main(){
    int arr[2][2]={{1,2},{5,6}};
    int row,col;
    printf("Printing array:\n ");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<2;col++){
            printf("%d",arr[row][col]);
        }
    }
    // transpose array
    printf("Transposing array:");
    for(col=0;col<2;col++){
        printf("\n");
        for(row=0;row<2;row++){
            printf("%d",arr[row][col]);
        }
    }
}