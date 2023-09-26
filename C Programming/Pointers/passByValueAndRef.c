#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define SIZE_ARRAY 50

typedef struct s_big_boy
{
    char data[SIZE_ARRAY];
} t_big_boy;

void find_24ByPassingValue(t_big_boy big_boy){
    int i;
    i=0;
    while(1){
        if(big_boy.data[i]==42){
            printf("42 is in position %d\n",i);
            break;
        }
        ++i;
    }
}

void find_24ByReference(t_big_boy *big_boy){
    int i;
    i=0;
    while(1){
        if(big_boy->data[i]==42){
            printf("42 is in position %d\n",i);
            break;
        }
        ++i;
    }
}


int main(){
    t_big_boy big_boy;
    srand(time(NULL));

    big_boy.data[rand()%SIZE_ARRAY]=42; // adding 42 randomly
    find_24ByPassingValue(big_boy);
    find_24ByReference(&big_boy);
}