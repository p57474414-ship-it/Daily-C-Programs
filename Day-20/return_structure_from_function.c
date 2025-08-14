#include<stdio.h>

struct Student{

    int id;
    char name[50];
    float marks;

};

struct Student createStudent( int id, const char *name,float marks) {
    struct Student s; 
    s.id = id;
    snprintf(s.name ,sizeof(s.name), "%s", name);
    s.marks = marks;
     
    return s;
}

int main(){


struct Student s1 = createStudent(1 , " alice" , 85.5);
printf("ID:%d, Name: %s, Marks : %.2f\n", s1.id , s1.name, s1.marks);


    return 0;
}