// function number to find which is greater
#include<stdio.h>
int greater(int a,int b){
    if(a>b){
        printf("a is greater:");
    }
    else{
        printf("b is greater.");
    }
}
int add(int a,int b){
    int res=a+b;
    printf("\n total=%d",res);
}
int main(){
    int num1,num2;
    printf("Enter num1,num2:");
    scanf("%d %d",&num1,&num2);
    greater(num1,num2);
    add(num1,num2);
    add(40,50);
    greater(70,90);
}