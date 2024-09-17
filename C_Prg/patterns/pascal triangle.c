/*
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
*/
#include<stdio.h>
int main(){
    int row,col,space,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(space=1;space<n-row;space++){
            printf(" ");
        }
        int num=1;
        for(col=1;col<=row;col++){
            printf("%d ",num);
            num=num*(row-col)/col;
        }
        printf("\n");
    }
}