#include<stdio.h>

void printData(void *data,char dataType){
    if(dataType=='i'){
        printf("Integer: %d\n",*(int *)data);
    }
    else if(dataType=='f'){
        printf("Float: %d\n",*(float *)data);
    }
    else if(dataType=='c'){
        printf("Character: %d\n",*(char *)data);
    }
    else{
        printf("Unknown data type");
    }
}

int main(){
    int intValue=42;

    // print differnt data types using void pointer
    printData(&intValue,'i');
    printData(&intValue,'f');
    printData(&intValue,'c');
}