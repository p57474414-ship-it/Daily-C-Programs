#include<stdio.h>
int main(){
FILE *fp = fopen("output.txt","w");
    if(fp == NULL){
    printf("error opening the file");
    return 1;
    }


    fprintf( fp, "Hello file\n");
    fclose(fp);


    printf("data written to the file succesfully");
    return 0;
}