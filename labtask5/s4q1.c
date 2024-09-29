#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter number: ");
    scanf("%d",&num1);
    printf("Enter number: ");
    scanf("%d",&num2);
    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;
    printf("Before swapping:\n number1: %d \n number2: %d ",num2,num1);
    printf("\nAfter swapping:\n number1: %d \n number2: %d ",num1,num2);

}