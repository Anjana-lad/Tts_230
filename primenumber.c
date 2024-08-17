//prime numbers are number which are divisible by 1 and the number itself.
#include<stdio.h>
int main(){
    int num,i,temp=0;
    printf("Enter number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i==0){  
            temp++;   
        }
    }
    if(temp==2){
         printf("\n Number is  prime number.");
        }
        else{
            printf("Number is not prime.");
        }
    }
