/*strings are group of characters. Its always end with the null character('\0').
string functions:
strlen,strcmp,strupr,strlwr,strcat,strchr,strstr,strset,strrev,strcpy*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[20],str2[20];    
    printf("string=%s",str);
    char str1[50];
    printf("\n Enter string:");
   // scanf("%[^\]s",&str1);
    //gets(str1);
    fgets(str,20,stdin);
    fgets(str1,50,stdin);
       printf("\n String1=%s",str);
   printf("\n String2=%s",str1);
    //string length:-
   //  printf("\n Length of str2=%d",strlen(str1));
    //string compare:=
    // printf("\n String compare=%d", strcmp(str,str1));
    // string copy:-
   // printf("\n string copy=%s",strcpy(str2,str1));
   // printf("\n string 3=%s",str2);
    // string reverse:
  //  printf("string reverse=%s\n string reverse2=%s",strrev(str1),strrev(str2));
    // string concatenate:-
    //printf("concatenate = %s",strcat(str,str1));
    //string lower:
    printf("String to change in lower:=%s",strlwr(str));
    //string upper:
    printf("String to upper case+%s",strupr(str1));
    // string character:
    printf("String character =%s",strchr(str,'a'));
    //strstr(sub string):
    printf("String inside string=%s",strstr(str1,"GRA"));
    // string set.
    printf("String set=%s",strset(str,'x'));
}