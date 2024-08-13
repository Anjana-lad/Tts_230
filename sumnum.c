// sum of 10 naturals numbers using for loop
#include<stdio.h>
int main(){
    int i,sum=0,n;
    printf("Enter number for ending number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("Total =%d",sum);
}