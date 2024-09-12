// file handling : It is a way to create a new external file in c program;
//it supports 2 type of file that is 1. binary file and 2. text file.
#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("G:\\Tts_230\\Assignment\\demo.txt ","w+");
    char str[50];
    printf("Enter string:");
    gets(str);
    if (ptr==NULL){
        printf("File not created.");
    }
    else{
        printf("File is created.");
        fprintf(ptr,str);

    }
    printf("\n data inserted successfully..");
}