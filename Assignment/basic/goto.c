// goto statements:
/* syntax:
label_name:
    executable statements;
    goto label_name;
*/
#include<stdio.h>
int main(){
    int num;
    user:
    printf("\n Enter number(press 1 to exit):");
    scanf("%d",&num);
    printf("You entered=%d\n",num);
    if(num!=1){
        goto user;
    }
    else{
        printf("End of program.");
    }
}