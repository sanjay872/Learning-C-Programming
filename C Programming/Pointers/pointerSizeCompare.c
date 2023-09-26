#include<stdio.h>

typedef struct t_big{
    int data[100000]; 
} s_big;

int main(){
    char c;
    short s;
    long l;
    s_big big;

    printf("Pointer Size of Char: %d\n",sizeof(&c));
    printf("Pointer Size of Short: %d\n",sizeof(&s));
    printf("Pointer Size of Long: %d\n",sizeof(&l));
    printf("Pointer Size of Big: %d",sizeof(&big));

}