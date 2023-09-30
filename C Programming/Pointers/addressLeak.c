#include<stdio.h>

void bar(){
    int t2=56;
}

int *foo(){
    int t1=42;
    return &t1;
}

int main(){
    int *pn;
    pn=foo();

    printf("%d\n",*pn);
    bar();
    printf("%d",*pn);

    /*
        output is : 42 1337
        When foo() is executed, the address is placed on the stack.
        then on top of it bar() is placed.
        When new varable declaration is done, the address placed on the stack is also over leaked to bar() function.
        Because of this we are getting this output.
        To avoid this behaviour don't return address.
    */
}