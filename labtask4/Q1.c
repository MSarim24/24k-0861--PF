#include<stdio.h>
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    if (num%3 == 0) {
        printf("The number is multiple of 3");
    }
    else {
        printf("the number is not multiple of 3");
    }
}