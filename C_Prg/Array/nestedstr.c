// nested structure :structure inside structure.
#include<stdio.h>
struct employee{
    int e_id;
    float salary;
    struct department{
        int d_id;
        char d_name[20];
    } dept;
}emp;
int main(){
    //struct employee emp;
    printf("Enter e_id:");
    scanf("%d",&emp.e_id);
    printf("Enter salary:");
    scanf("%f",&emp.salary);
    printf("Enter d_id:");
    scanf("%d",&emp.dept.d_id);
    printf("Enter department name:");
    scanf("%s",&emp.dept.d_name);

    printf("\n Employee Details:\n");
    printf("\n Emp_id=%d",emp.e_id);
     printf("\n Emp_salary=%f",emp.salary);
 printf("\n Emp_did=%d",emp.dept.d_id);
 printf("\n Emp_department name=%s",emp.dept.d_name);
}
