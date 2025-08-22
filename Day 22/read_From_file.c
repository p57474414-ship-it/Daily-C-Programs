#include<stdio.h>
int main(){

    char buffer[100];
    FILE *fp = fopen("output.txt", "r");
    if(fp == NULL){
        printf("Error in opening the file\n");
        return 1;

    }

    while(fgets(buffer , sizeof(buffer),fp) != NULL){
 printf("%s", buffer);
    }
    
 fclose(fp);
    return 0;
}