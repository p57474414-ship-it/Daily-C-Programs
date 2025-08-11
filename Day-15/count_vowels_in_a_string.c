#include<stdio.h>
int main(){


char str[100];
int i, vowels = 0;

printf("Enter a string:");
fgets(str , sizeof(str), stdin);

for( i = 0; str[i] != '\0'; i++){

    char c = str[i];
     
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
vowels++;


    }


}

printf("number of vowels:%d\n", vowels);

 
    return 0;
}