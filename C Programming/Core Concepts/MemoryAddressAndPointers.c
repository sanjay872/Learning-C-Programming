#include<stdio.h>
/*
    All the data are stored has a address
    &variable will be give the address in which it is stored
    & is address of.
    
    Pointer is a address datatype.
    Dereference a pointer is to get the value that is stored in the address it is pointing
*/
int main(){
    int age=20;
    printf("Memory address of vaiable age: %p\n",&age);
    int * agePointer; //pointer variable
    agePointer=&age;
    printf("Address of age pointer: %p\n",&agePointer);
    printf("Age Address from it's pointer: %p\n",agePointer); 
    printf("Get Age value through dereferencing of age pointer: %d",*agePointer);
    return 0;
}