// function categories:
// 1. no arguments no return statement .
// 2. no arguments with return statement .
// 3. with arguments no return statement .
// 4. with arguments with return statement .
 

 //1 .
// void sum(){
//     int x,y;
//     printf("Enter x and y:");
//     scanf("%d %d",&x,&y);
//     printf("Sum=%d",x+y);

// }

// #include<stdio.h>
// int main(){
//     sum();    
// }

// 2.
 
// int sum(){
//     int x,y;
//     printf("Enter x and y:");
//     scanf("%d %d",&x,&y);
//     return x+y;
// }

// #include<stdio.h>
// int main(){
//     printf("called function sum=%d",sum());    
// }

// 3.
 
// void sum(int x,int y){
//       printf("Sum=%d",x+y);
// }

// #include<stdio.h>
// int main(){
//     int x,y;
//      printf("Enter x and y:");
//     scanf("%d %d",&x,&y);
//     sum(x,y);    
// } 

// 4. 
  int sum(int x,int y){
      return x+y;
  }
#include<stdio.h>
int main(){
    int x,y;
     printf("Enter x and y:");
    scanf("%d %d",&x,&y);
    printf("Sum=%d",sum(x,y));    
} 