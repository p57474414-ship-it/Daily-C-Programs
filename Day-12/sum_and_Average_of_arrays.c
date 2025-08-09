#include<stdio.h>
int main(){

int n = 5;
int arr[5]= { 8,5,4,7,3};
int sum = 0;


for(int i = 0; i <5 ; i++){
sum = sum + arr[i];
}

float avg = sum / 5;

printf("Sum : %d , Average : %.2f", sum , avg);

    return 0;
}