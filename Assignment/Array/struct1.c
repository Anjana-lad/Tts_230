// structure is used to store different types of value in a single variable name.
/*
syntax:
struct structure_name{
    data member;
    datatype num;
    int num;

};
to access the data member of structure we can do it with .(dot ) operator.
*/
#include<stdio.h>
struct student{  // student strucure name.
    int rollno;  // DM
    char name[25]; // DM
    float percent; //DM
};
int main(){
  struct student s1[2];  // structure variable
  int i;
  for(i=0;i<2;i++){
    printf("Enter rollno:");
    scanf("%d",&s1[i].rollno);
    printf("Enter name:");
    scanf("%s",&s1[i].name);
    printf("Enter percent:");
    scanf("%f",&s1[i].percent);
  }
  for(i=0;i<2;i++){
    printf("\n Student details:\n");
    printf("\nRollno=%d",s1[i].rollno);
    printf("\nName=%s",s1[i].name);
    printf("\nPercent=%.2f",s1[i].percent);
   }
}
