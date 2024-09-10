/*
 1 2 3 4 5 
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9

algorithm for spiral pattern
step 1: define array[size][size];
step 2: loop for outer values
        s1: loop for left to right.
        s2: loop for top to bottom.
        s3: loop for right to left.
        s4. loop for bottom to top.
step 3: loop for inner values till size/2;

*/

#include<stdio.h>
int main(){
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    int arr[size][size];
    int row=0,col,num=1,end=size-1;

    for(row=0;row<=size/2;row++,end--){
    
    // loop for left to right.
    for(col=row;col<=end;col++){
        arr[row][col]=num++;
    }
    // loop for top to bottom:
    for(col=row+1;col<=end;col++){
        arr[col][end]=num++;
    }
    // loop for right to left;
    for(col=end-1;col>=row;col--){
        arr[end][col]=num++;
    }
    // loop for bottom to top:
    for(col=end-1;col>row;col--){
        arr[col][row]=num++;
    }
    }
    // print array
    for(row=0;row<size;row++){
        printf("\n");
        for(col=0;col<size;col++){
            printf("%d \t",arr[row][col]);
        }
    }


}