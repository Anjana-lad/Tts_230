// armstrong number : 153=1*1*1+5*5*5+3*3*3=153
#include<stdio.h>
int main(){
    int num,rem,sum=0,origin_num;
    printf("Enter number:");
    scanf("%d",&num);
    origin_num=num;
    while(num>0){
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    printf("sum of number=%d",sum);
    if(sum==origin_num){
        printf("Number is armstrong number .");

    }
    else{
        printf("Number is not an armstrong number.");
    }
}
