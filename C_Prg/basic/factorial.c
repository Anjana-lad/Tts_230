// factorial number : 6!= 6*5*4*3*2*1=720
#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("Enter number for factorial:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        fact=fact*i;
    }
    printf("\n Factorial=%d",fact);
}
