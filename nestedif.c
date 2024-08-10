//nested if: if inside if 
//syntax:
/*
 if(condition){
    if(condition){
        true part
    }
    else{
        false part
    }
 }
 else{
    if(condition){
        true part
    }
    else{
      false part
      }
 }
*/
// program to check weather the male or female is eligible for marriage or not
#include<stdio.h>
int main(){
     char choice;
     printf("Enter choice Male m  or Female f:");
     scanf("%c",&choice);
     int age;
  
     if(choice=='m' || choice=='M'){
        printf("Enter age:");
        scanf("%d",&age);
        if(age>21){
            printf("Male is eligible.");
        }
        else{
            printf("Male not eligible");
        }
     }
     else if(choice=='F'|| choice=='f'){
           printf("Enter age:");
           scanf("%d",&age);
        if(age>18){
             printf("Female is eligible.");
        }
        else{
            printf("Female not eligible");
          }
        }
    else{
        printf("Invalid choice..");
    }
}