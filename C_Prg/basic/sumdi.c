// sum of digit : 1234:10
#include<stdio.h>
int main(){
    int num,rem,sum=0;
    printf("Enter number:");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("Sum of digit=%d",sum);
}

