#include<stdio.h>

void changeValue(int *nb);

int main(){
    int nb;
    nb=24;
    changeValue(&nb); //pass value by reference
    printf("%d",nb);   
    return 0;
}

void changeValue(int *nb){
    *nb=42;
}