//continue statement
#include<stdio.h>
int main(){
    int num,i;
    printf("Enter number to skip:");
    scanf("%d",&num);
    for(i=0;i<=20;i++){
        if(i==num){
        continue;
        }
        else{
      printf("%d \t",i);
    }
    } 
}