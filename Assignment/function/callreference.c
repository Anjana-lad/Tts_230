//call by references.
#include<stdio.h>
int swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("\n A=%d \t B=%d",*a,*b);
}
int main(){
    int a,b;
    printf("Enter a and b:");
    scanf("%d %d",&a,&b);
    printf("Before calling function:\n a=%d \t b=%d",a,b);
    printf("\n Function call");
    swap(&a,&b);
    printf("\n after calling function:\n a=%d \t b=%d",a,b);
}