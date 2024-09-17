// to check weather character is vowel or not.
#include<stdio.h>
int main(){
     char ch;
     printf("enter character:");
     scanf("%c",&ch);
     switch (ch)
     {
     case 'A':
     case 'E':
     case 'I':
     case 'O':
     case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
     printf("This is vowel");
     break;
     default:
        printf("It is consonants");
        break;
     }
}