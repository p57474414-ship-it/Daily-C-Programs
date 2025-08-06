#include<stdio.h>
int main(){


int age;
float salary;

printf("enter your age:\n");
scanf("%d",&age);

printf("enter you salary:\n");
scanf("%f ",&salary);

printf("Your are %d years old and earn %.2f per month\n", age , salary);



    return 0;
}