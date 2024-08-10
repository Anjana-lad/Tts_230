// if elesif else.
/*
  if(condition){
  true part
  }
  else if(condition){
  true part
  }
  else if(condition){
  true part
  }
  else{
  false part
  }

*/

#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        printf("Num1 is greater.");
    }
    else if(num2>num1 && num2>num3){
        printf("Num2 is greater.");
    }
    else{
        printf("Num3 is greater.");
    }
}