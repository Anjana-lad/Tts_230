// loop control statements: break;continue,goto.
#include<stdio.h>
int main(){
    int i,num;
    printf("Enter number to stop.");
    scanf("%d",&num);
    for(i=0;i<100;i++){
        if(i==num){
            break;
        }
printf("%d\n",i);
    }

}
