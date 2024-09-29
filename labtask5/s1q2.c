#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num == 0){
        printf("Number is zero");
    }
    else if (num>0){
        if (num%2==0){
            printf("Number is positive and even");
        }
        else{
            printf("Number is positive and odd");
        }
    }
    else{
        printf("Number is negative");
    }
}