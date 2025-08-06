#include<stdio.h>
int main(){
 
    char operator;
    int a,b;

    printf("Enter an operator (+ , - , * , /):");
    scanf(" %c", &operator);

    printf("enter two integers:\n");
    scanf("%d %d", &a,&b);

    switch(operator){
        case'+':
        printf("Result : %d\n", a + b);
        break;

        case'-':
         printf("Result : %d\n", a - b);
        break;

        case '*':
         printf("Result : %d\n", a * b);
        break;

        case '/':
        if(b != 0){
            printf("Result : %d\n", a / b);

        }
           else{
            printf("Errror\n");
            break;
           }

           default:
           printf("Invalid operator\n");
    }




    return 0;
}