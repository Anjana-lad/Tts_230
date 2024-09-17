// logical operator => and(&&) or (||) not (!);
// A B a&&b   A||b   !A
// 0 0  0      0      1
// 0 1  0      1      1
// 1 0  0      1      0
// 1 1  1      1      0

#include<stdio.h>
int main(){
    int num1,num2,res;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    res= (num1>20) && (num2<50);
    printf("\n Logical operator And=%d",res);
    res= (num1>40) || (num2<=30);
    printf("\n Logical OR=%d",res);
    printf("\n Logical Not=%d",num2!=20);
}