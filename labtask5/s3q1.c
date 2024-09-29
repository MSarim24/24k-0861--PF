#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter number: ");
    scanf("%d",&num1);
    printf("Enter number: ");
    scanf("%d",&num2);
    (num1>num2)?printf("%d is maximum",num1):printf("%d is maximum",num2);
}