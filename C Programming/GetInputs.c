#include<stdio.h>
#include<stdlib.h>

int main(){
    int age;
    double gpa;
    char firstName[20];
    char fullName[40];
    printf("Enter FullName:");
    fgets(fullName,40,stdin); // variable, size, lib
    printf("Enter age:");
    scanf("%d",&age);
    printf("Enter GPA:");
    scanf("%f",&gpa);
    printf("Enter firstName:");
    scanf("%s",firstName); //get character till it sees a space
    printf("FirstName: %s, FullName: %s, Age:%d, GPA:%f",firstName,fullName,age,gpa);
}