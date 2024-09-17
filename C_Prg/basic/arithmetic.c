//arithmetic operator := +,-,/,*,%,++,--
//increment /decrement : pre=> ++variable_name, post=> variable_name++
 
#include<stdio.h>
int main(){
    int num1,num2,res;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    // res=num1+num2;
    // printf("\n Addition=%d",res);
    // res=num1-num2;
    // printf("\n Subtraction=%d",res);
    // res=num1*num2;
    // printf("\n multiplication=%d",res);
    // res=num1/num2;
    // printf("\n Division=%d",res);
    // res=num1%num2;
    // printf("\n Modulo =%d",res);
    num1++;
    printf("\n post increment=%d",num1);
    num2--;
    printf("\n post Decrement=%d",num2);
    ++num1;
    printf("\n Pre increment=%d",num1);
    --num2;
    printf("\n pre decrement=%d",num2);
}