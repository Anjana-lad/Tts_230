// pointer arithmetic with the use of array
#include<stdio.h>
int main(){
    int arr[7]={74,52,61,93,49,12,15};
    int *ptr,*ptr1;
    ptr=&arr[0];
    ptr1=&arr[6];
    printf("\n Value at 0 index:%d",ptr);
    printf("\n Value at last index=%d",ptr1);
  ptr++;
  printf("\n Value at :%d",ptr);
  ptr1--;
  printf("\n Value at :%d",ptr1);

  int result=*ptr+*ptr1;
  printf("Value of pointer variable:%d",result);

  int k=* ptr * (*ptr1);
  printf("Value at k=%d",k);
} 