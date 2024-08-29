// function example
#include<stdio.h>

void msg();  // function declaration
int main(){
    int num1,num2;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    printf("Num1=%d \n num2=%d",num1,num2);
    msg();  // calling function
    num1+=10;  // num1=num1+10;
    printf("\n Num1=%d",num1);
    msg();
    num2*=20;
    printf("\n num2=%d",num2);
    msg();
    num2-=100;
    printf("\n num2=%d",num2);
    msg(); 
}
void msg(){  //function definition
    printf("\n Welcome to the world of programming.");
}