//sorting array
#include<stdio.h>
int main(){
    int i, arr[20],n;
    printf("enter total numbers needed in array:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // sorting logic:
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //for printing in ascending order.
    printf("Ascending order:\n");
    for(i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
}