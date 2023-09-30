#include<stdio.h>

void printValue(char *arg[]){
    while(*arg){
        printf("%s\n",*arg++);
    }
}

int main(){
    char *av[]={"test","1","2","main"};
    char **av1=av;
    printValue(av1);
    return 0;
}