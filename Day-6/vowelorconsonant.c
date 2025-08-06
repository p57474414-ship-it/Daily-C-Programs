#include<stdio.h>
int main(){


char c;

printf("Enter an alphabet:");
scanf(" %c", &c);

switch(c){

    case'a':case'e':case'i':case'o':case'u':
    case'A':case'E':case'I':case'O':case'U':

    printf("it is a vowel!\n");
    break;

    default:
    printf(" it is a consonant!\n");
}



    return 0;
}

