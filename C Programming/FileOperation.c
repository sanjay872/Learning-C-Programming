#include<stdio.h>

int main(){
    char line[255];
    FILE * fpointer=fopen("employees.txt","r"); // file name, mode
    
    // write a file, change mode to w
    // fprintf(fpointer,"Jim, Salesman\nPam, Manager\nOscar, Accountant"); // it will overwrite all the data
    // to append change the mode as 'a' and this will append content to the exist file.

    //read a file, change mode to r
    fgets(line,255,fpointer); // store variable, size, file pointer
    printf("%s", line);

    fclose(fpointer);
    return 0;
}