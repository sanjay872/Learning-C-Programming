#include<stdio.h>

// Function Declaration
void updateLuckNumber(int luckyNumbers[], int luckyNumber, int pos);
int getLuckNumberAtPos(int luckyNumbers[], int pos);

int main(){
    int luckyNumbers[]={1,2,3,4};
    printf("Before update: %d\n",luckyNumbers[1]);
    updateLuckNumber(luckyNumbers,8,1); // Function Call
    printf("After Update: %d",getLuckNumberAtPos(luckyNumbers,1));
    return 0;
}

/*
    Function Definition. 
    ByDefault all the value are pass by reference.
*/
void updateLuckNumber(int luckyNumbers[], int luckyNumber, int pos){
    luckyNumbers[pos]=luckyNumber;
}

int getLuckNumberAtPos(int luckyNumbers[], int pos){
    return luckyNumbers[pos];
}