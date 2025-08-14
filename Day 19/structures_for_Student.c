#include<stdio.h>

struct Student{
    int id;
    char name [50];
    float marks;

};

int main(){

 
struct Student s1 = { 1 , "Purvi ", 85.5};

printf("ID : %d\n", s1.id);

printf("NAME : %s\n", s1.name);

printf("MARKS : %.2f\n", s1.marks);


return 0;




}



