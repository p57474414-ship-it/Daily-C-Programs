#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr = ( int *)malloc(sizeof(int));
    if(ptr == NULL){
        printf("memory allocation failed\n");
        return 1;
    }

*ptr = 100;
printf("value = %d\n", *ptr);

free(ptr);

    return 0;
}