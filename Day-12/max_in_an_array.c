#include<stdio.h>

int main(){


int n = 5;
int arr[5] = { 70,54,66,15,7};
int max = arr[0];

for(int i = 1; i < 5; i++){
   if( arr[i] > max)
   max = arr[i];


}

printf("maximum value: %d\n", max);
    return 0;
}