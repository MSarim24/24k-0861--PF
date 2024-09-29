#include<stdio.h>
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    if (num/3 & num/5){
        printf("Number is divisible by both 3 and 5");
    }
    else{
        printf("Number is not divisible by both 3 and 5");

    }
}