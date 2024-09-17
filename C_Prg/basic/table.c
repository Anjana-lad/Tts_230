// table of given number.
// #include<stdio.h>
// int main(){
//     int num,i;
//     printf("Enter number:");
//     scanf("%d",&num);
//     for(i=1;i<=10;i++){
//        printf("%d*%d=%d\n ",num,i,num*i);
//     }
// }

#include<stdio.h>
int main(){
    int i=1,num;
    printf("Enter number:");
    scanf("%d",&num);
    while(i<=10){
        printf("%d*%d=%d\n ",num,i,num*i);
        i++;
    }
}