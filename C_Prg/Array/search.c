// searching array elements form the given array.

#include<stdio.h>
int search(int arr[],int size,int elem){
    for(int i=0;i<size;i++){
        if(arr[i]==elem){
            return i;
        }
    }
       return -1;
}
int main(){
    int arr[]={85,25,14,36,92,74,29};
    int size=sizeof(arr)/sizeof(arr[0]);
    int num_to_search;
    printf("Enter number to be searched:");
    scanf("%d",&num_to_search);
    int res=search(arr,size,num_to_search);
    if(res==-1){
        printf("Element not found");
    }
    else{
        printf("Element found=%d",res);
    }
}