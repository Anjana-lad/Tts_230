// array is a derived data-type.array is use to store multiple value of same type in a single variable name. 
// program to implement array static array
// #include<stdio.h>
// int main(){
//     int num[]={7,5,3,92,1};
//     int i;
//     printf("Printing array:");
//     for(i=0;i<5;i++){
//         printf("%d \t",num[i]);
//     }
// }

// dynamic array
#include<stdio.h>
int main(){
    int num[5];
    int i;
    printf("Enter values for array:");
    for(i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    printf("Printing array");
    for(i=0;i<5;i++){
        printf("\n %d=%d",num[i],num[i]*num[i]);
    }
}