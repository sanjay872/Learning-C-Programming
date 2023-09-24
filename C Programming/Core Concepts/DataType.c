#include<stdio.h>

int main(){

    char dot='.';
    char name[]="Gol D Roger";
    char otherName[]="Gold Roger";
    const int AGE=40;
    double power=10.0;

    printf("There once was a man named %s%c\n",name,dot);
    printf("He was %d years old%c\n",AGE,dot);
    printf("But others call him %s%c\n",otherName,dot);
    printf("and he is the pirate king!%c\n",dot);
    printf("The Character Power out of 10 is %.1f%c",power,dot);
}