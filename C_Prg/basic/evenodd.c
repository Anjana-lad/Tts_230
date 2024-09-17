// check weather number is even odd.
#include<stdio.h>
int main(){
    int num;
printf("Enter number:");
scanf("%d",&num);
if(num%2!=0){
    printf("%d is odd",num);
}
else{
    printf("%d is even",num);
}
}