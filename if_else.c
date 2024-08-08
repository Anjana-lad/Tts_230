// if else statements
/*syntax:
if(condition){
    // executable parts
}
else{
printf("false executable parts");
}
*/
//program to take i/p from user to check weather a person can vote or not.
#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>18){
        printf("Able to vote");
    }
    else{
        printf("Not able to vote");
    }
}