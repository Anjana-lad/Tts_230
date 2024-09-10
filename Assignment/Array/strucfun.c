// passing structure as function parameter.
#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks[4];
};
// function
 void stud_data(struct student s){
    printf("\n Student details:\n");
    printf("\n Rollno:%d",s.rollno);
    printf("\n Name=%s",s.name);
    for(int i=0;i<4;i++){
       printf("\n Marks=%.2f",s.marks[i]);
    }
 }
int main(){
    struct student ss;
    printf("Rollno:");
    scanf("%d",&ss.rollno);
    printf("Name=");
    scanf("%s",&ss.name);
    for(int i=0;i<4;i++){
        printf("marks=");
        scanf("%f",&ss.marks[i]);
    }
    stud_data(ss);
}