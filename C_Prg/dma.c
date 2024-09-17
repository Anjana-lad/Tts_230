//Dynamic memory allocation with the help of pointers.
/*methods 
1. malloc ()
2. calloc()
3. realloc()
4. free()
//malloc=(int *)malloc(num*sizeof(int));
*/
//program to find sum of n natural numbers;
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr,sum=0,i;
//     int num;
//     printf("Enter total numbers of elements: ");
//     scanf("%d",&num);
//     ptr=(int *) malloc(num*sizeof(int));

//     if(ptr==NULL){
//         printf("No memory allocation.");
//     }
//     else{
//         printf("memory allocated..\n ");
//         printf("Enter elements:");
//         for(i=0;i<=num;i++){
//             scanf("%d",(ptr+i));
//             sum+=*ptr+i;
//         }
//     }
//     printf("Sum=%d",sum);
// }

//calloc(num,sizeof(int));
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,sum=0,i;
    int num;
    printf("Enter total numbers of elements: ");
    scanf("%d",&num);
    ptr=(int *) calloc(num,sizeof(int));
    if(ptr==NULL){
        printf("No memory allocation.");
    }
    else{
        printf("memory allocated..\n ");
        printf("Enter elements:");
        for(i=0;i<=num;i++){
            scanf("%d",(ptr+i));
            sum+=*ptr+i;
        }
    }
    printf("Sum=%d",sum);
    free(ptr);
}