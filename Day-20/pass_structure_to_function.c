#include<stdio.h>

struct Student{
    int id;
    char name[50];
    float marks;
};

void printStudent(struct Student s){
    printf("ID:%d\n", s.id);
     printf("NAME:%s\n", s.name);
      printf("MARKS:%.2f\n", s.marks);
}

int main(){

    struct Student s1 = { 1 , "alice" , 85.5};
    printStudent(s1);

    return 0;
}