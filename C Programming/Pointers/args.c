#include<stdio.h>

int main(int argc, char **argv){

    int i=0,j;
    while(*argv){ //argv[i] || *(argv+i)
        j=0;
        while(**argv){ // argv[i][j] || *(*(argv+i)+j)
            printf("%c",**argv);
            *(*argv)++; // j++
        }
        printf("\n");
        argv++; // i++; 
    }
    return 0;
}