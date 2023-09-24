#include<stdio.h>

int main(){
    double num1,num2,result;
    char operation,con;
    while(1){
        printf("Enter First Number:");
        scanf("%lf",&num1);
        printf("Enter The operation:");
        scanf(" %c",&operation);
        printf("Enter Second Number:");
        scanf("%lf",&num2);
        if(operation=='+')
            result=num1+num2;
        else if(operation=='-')
            result=num1-num2;
        else if(operation=='*')
            result=num1*num2;
        else if(operation=='/')
            result=num1/num2;
        else
            printf("Invalid Operation");
        printf("Result: %.2f\n",result);
        printf("Enter * to continue..................\n");
        scanf(" %c",&con);
        if(con!='*')
            break;
    }
    return 0;
}