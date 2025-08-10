#include<stdio.h>
 int main(){
char str1[100] = "hello,";
char str2[] = "world!";
int i = 0,  j = 0;

while(str2[i] != '\0'){
    i++;
}

while(str2[j] != '\0'){
    str1[i++] = str2[j++];
}

str1[i] ='\0';

printf("concatenated string : %s\n", str1);

return 0;

}