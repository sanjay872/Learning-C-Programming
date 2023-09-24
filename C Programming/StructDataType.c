#include<stdio.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(){
    struct Student students[20];
    struct Student student1;
    student1.age=23;
    student1.gpa=10;
    students[0]=student1;
    printf("%d",students[0].age);
    return 0;
}