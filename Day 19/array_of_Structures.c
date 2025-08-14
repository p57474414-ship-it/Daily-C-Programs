#include<stdio.h>

struct Student{
    int id;
    char name [50];
    float marks;
};

int main(){

struct Student students[2] = {
 { 1 , "alice", 85.5},
  { 1 , "harry", 90.5}
};
for(int i = 0; i <2 ; i++){
printf("ID: %d, Name : %s, Marks : %.2f\n",
    students[i].id , students[i].name , students[i].marks);

}

return 0;
    
}
