#include<stdio.h>
int main(){

FILE *fp = fopen("output.txt", "a");
  if(fp == NULL){
    printf("Error in opening file\n");
    return 1;
  }

  fprintf(fp, "Appending this line\n");
  fclose(fp);

  printf("Data has been appended\n");
  

    return 0;
}