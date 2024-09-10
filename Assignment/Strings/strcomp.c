// string compare without using strcmp;
// #include<stdio.h>
// int main(){
//     char str1[20],str[20];
//     int i;
//     printf("Enter string:");
//     gets(str1);
//     printf("Enter string 2:");
//     gets(str);

//     for(i=0;str1[i]==str[i] && str1[i]!='\0';i++);
    
//     if(str1[i]>str[i]){
//         printf("Str1 is greater");
//     }
//     else if(str1[i]<str [i]){
//         printf("Str is greater.");
//     }
//     else{
//         printf("Both strings are same.");
//     }
// }

// string with using function stricmp
#include<string.h>
#include<stdio.h>
int main(){
  
    char str[20],str2[20];
    printf("Enter string:");
    gets(str);
    printf("Enter string:");
    gets(str2);
    int ch=strcmp(str,str2);
    printf("string compare without case checking=%d",ch);
    int temp=stricmp(str,str2);
    printf("\n String compare with case=%d",temp);
}
