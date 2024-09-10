//bitwise operator:  &,|,^,~,<<,>>
// A B A^B
// 0 0 0
// 1 0 1
// 0 1 1
// 1 1 0
// ~num=> -(num+1) 

#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    printf("\n Bitwise and:%d",num1 & num2);
    printf("\n Bitwise Or :%d",num1|num2);
    printf("\n exclusive XOr :%d",num1^num2);
    printf("\n Negation of num1=%d",~num1);
}
