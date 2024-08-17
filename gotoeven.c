//goto statement to find weather number is even or not.
#include<stdio.h>
int main(){
    int num;
    user:
    printf("Enter number:");
    scanf("%d",&num);
    
    if(num%2==0){
        goto even;
    }
    else{
        goto user;
    }
    even:
        printf("number is even.");

}