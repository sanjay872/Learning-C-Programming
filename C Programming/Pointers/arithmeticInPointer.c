#include<stdio.h>

int main(){
    int c;
    int *p;

    c=2;
    p=&c;
    /*
        the pointer is increment based on the size of the data type it is pointing
        here, the pointer is incremented by 4 as the size of integer is 4.
    */
    printf("%p %p %p %p",p+1,p+2,p+3,p+4);
}