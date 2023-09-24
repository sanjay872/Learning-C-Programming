#include<stdio.h>

/*
    1. Conditional Statements
    2. Loop Statements
    3. Switch Statement
*/

int max(int num1, int num2, int num3); 
void getColorByCode(int code);
void executeLoopStatements();

int main(){
    printf("Max is: %d\n",max(10,20,5)); 
    getColorByCode(101);
    getColorByCode(102);
    executeLoopStatements();
    return 0;
}

int max(int num1, int num2, int num3){
    if(num1>num2 && num1>num3)
        return num1;
    else if(num2>num1 && num2>num3)
        return num2;
    else
        return num3;
}

void getColorByCode(int code){
    switch (code)
    {
    case 101:
        printf("Orange\n"); 
        break;
    
    default:
        printf("Invalid code\n");
        break;
    }
}

void executeLoopStatements(){
    //for loop
    for(int i=0;i<10;i++){
        printf("%d ",i);
    }
    printf("\n");
    //while loop
    int j=10;
    while(j>0){
        printf("%d ",j);
        j--;
    }
    printf("\n");
    //do while
    int k=1;
    do{
        printf("%d ",k);
        k++;
    }while(k<5);
}