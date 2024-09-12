// pointer is a variable that is used to store the address of another variable. pointer variable is declared using (*)asterisk symbol.
/*syntax:
declaring a pointer variable:
     datatype * variable name;
initialization :
   ptr_variable = &variable_name //referencing a variable
*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    int *ptr; //pointer variable
    ptr=&num;  //referencing variable
    printf(" %d is at address %d",num,ptr);
    printf("\n Value at pointer:%d",*ptr);
}