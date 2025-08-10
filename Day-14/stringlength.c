#include<stdio.h>

int main(){

char str[] = "OpenAI";
int length = 0;

while(str[length] != '\0'){
    length++;

}

printf("length of the string is = %d\n", length);

    return 0;
}