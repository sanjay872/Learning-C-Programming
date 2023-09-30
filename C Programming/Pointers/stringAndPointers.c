#include<stdio.h>

int main(){
    char str[]="hello";

    
    printf("%c\n",str[0]);
    printf("%c\n",*str);
    printf("%c\n",3[str]);

    printf("\n\n");

    printf("%c\n","hello"[0]);
    printf("%c\n",*"hello");
    printf("%c\n",3["hello"]);
}