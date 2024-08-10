// nested switch : switch inside switch.
/* syntax:
// switch(expression){
//     case :
//     switch(expression){
//         case :
//         break;
//     }
//     break;
//     case:
//     break;
//     default:
//     break;
}
*/

#include<stdio.h>
int main(){
    int choice,ch;
    printf("Selected food of your choice.");
    printf("\n 1.Pizza.");
    printf("\n 2.cold-drink");
    printf("\n Enter choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("\n You have selected Pizza.");
        printf("\n Pizza Menu");
        printf ("\n 1. Veg pizza");
        printf("\n 2. Cheese pizza");
        printf("\n Enter choice for pizza.");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("You selected veg pizza.");
            break;
        case 2:
            printf("You selected cheese pizza.");
            break;
        default:
            printf("Invalid choice of pizza.");
            break;
        }
        break;
    case 2:
        printf("\n You selected cold- drink.");
        printf("\n Cold-Drink choice");
        printf("\n 1. Fresh juice.");
        printf("\n 2. Coke.");
        printf("\n Enter choice for cold-drink.");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("You selected Fresh Juice.");
            break;
        case 2:
            printf("You selected coke");
            break;
        default:
            printf("Invalid choice of cold-Drink");
            break;
        }
        break;
    default:
        printf("Invalid choice of food.");
        break;
    }
}