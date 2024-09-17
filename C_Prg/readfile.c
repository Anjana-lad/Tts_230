//read data from file.
#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("C:\\SE-Assignment\\struct.txt","r+");
    char str[500];
    if(fp==NULL){
        printf("FILe not found.");
    }
    else{
        printf("file found \n ");
        while(fgets(str,500,fp)!=NULL){
            printf("%s",str);
        }
    }
}