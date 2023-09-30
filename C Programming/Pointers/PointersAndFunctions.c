#include<stdio.h>

void foo(){
    return 42;
}

int main(){
    printf("%p\n",foo); //prints address
}