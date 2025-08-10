#include<stdio.h>
 int main(){

int a [2][2] = {{2,5},{7,8}};
int b [2][2] ={{4,3},{1,5}};
 int result [2][2] = {{0}};

 for(int i = 0; i < 2 ; i++){
    for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
 result[i][j] += a[i][j] * b[k][j];
            }

printf("%d ", result[i][j]);

    }

printf("\n");

 }

    return 0;
 }