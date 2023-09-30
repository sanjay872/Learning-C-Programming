#include<stdio.h>

int add(int a, int b);
int sub(int a,int b);
int multiply(int a, int b);
int divide(int a, int b);

int performOperation(int a, int b, int (*operation)(int,int)){ // syntax for pointer to function (*pointername)(args)
    return operation(a,b);
}

int main(){
    int a=10, b=5;

    //All the address are close to each other

    printf("Add %d and %d = %d, function address:%p \n",a,b,performOperation(a,b,add),add);
    printf("Sub %d and %d = %d, function address:%p \n",a,b,performOperation(a,b,sub),sub);
    printf("Mul %d and %d = %d, function address:%p \n",a,b,performOperation(a,b,multiply),multiply);
    printf("Div %d and %d = %d, function address:%p \n",a,b,performOperation(a,b,divide),divide);
}

int add(int a, int b){
    return a+b;
}

int sub(int a, int  b){
    return a-b;
}

int multiply(int a, int b){
    return a*b;
}

int divide(int a, int b){
    return a/b;
}