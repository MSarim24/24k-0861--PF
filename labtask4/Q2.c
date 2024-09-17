#include<stdio.h>
int main() {
    float num1,num2;
    char operator;
    printf("Enter any number:");
    scanf("%f",&num1);
    printf("Enter any number:");
    scanf("%f",&num2);
    printf("Enter Operator from + or - or * or /: ");
    scanf(" %c",&operator);

    switch (operator)
    {
    case '+':
        printf("%.2f",num1+num2);
         break;
    
    case '-':
        printf("%.2f",num1-num2);
        break;
    case '*':
        printf("%.2f",num1*num2);
        break;
    case '/':
        printf("%.2f",num1/num2);
        break;

    }
}