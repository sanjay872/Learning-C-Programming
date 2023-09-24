#include<stdio.h>

int main(){
    
    int n;
    int *pn;
    int **ppn;
    int ***pppn;

    n=24;
    pn=&n;
    ppn=&pn;
    pppn=&ppn;

    printf("%d\n",***pppn);
    printf("%p %p",***pppn,**ppn);

}