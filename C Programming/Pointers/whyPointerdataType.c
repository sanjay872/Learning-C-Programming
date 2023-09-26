#include<stdio.h>

int main(){
    int nb;
    int *ptr;

    nb = 42;
    ptr = &nb;
    /*
        Integer pointer gives the correct value
        when tried to get float value from integer pointer, it is not showing.
        But when converted to float point, the binary value of integer 42 which is stored is shown as float
    */
    printf("%d %f %0.60f %e\n",*ptr,*ptr,*(float *)ptr,*(float *)ptr); // type casting integer pointer to float pointer
    return 0;
}