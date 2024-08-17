//palindrome number : read same from both the side .
#include<stdio.h>
int main(){
    int num,rev=0,rem,origin_num;
    printf("Enter number:");
    scanf("%d",&num);
    origin_num=num;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("\n reverse number=%d",rev);
    if(origin_num==rev){
        printf("\n %d is palindrome",rev);
    }
    else{
        printf("\n %d is not palindrome",rev);
    }
}
