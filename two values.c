//taking two values from user
#include<stdio.h>
int main(){
    int num1,num2;
    char ch;
    float salary;
    double  marks;
    printf("\n Enter character:");
    scanf("%c",&ch);
    printf("\n Character=%c",ch);
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    printf("\n num1=%d \n num2=%d",num1,num2);
    printf("\n Enter salary:");
    scanf("%f",&salary);
    printf("\n Salary=%f",salary);
    printf("\n Enter marks:");
    scanf("%lf",&marks);
    printf("\n Marks=%lf",marks);
}

// escape sequence:
// \n for new line;
// \t for tab/space;