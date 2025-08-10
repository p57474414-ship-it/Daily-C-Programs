#include<stdio.h>
int main(){

int a [2][2] = {{2,5},{7,8}};
int b [2][2] = {{1,4},{6,7}};
int sum [2][2];

for(int i = 0; i <2 ; i++){
        for(int j = 0 ; j < 2; j++){

sum[i][j] = a[i][j] + b[i][j];
printf("%d ",sum[i][j]);
        }


printf("\n");


}



    return 0;

}