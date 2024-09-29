#include<stdio.h>
int main(){
    int age,income,credit;
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter income: ");
    scanf("%d",&income);
    printf("Enter credit score: ");
    scanf("%d",&credit);
     if (age >= 21 & age <= 65 & income >= 50000.0 & credit >= 650) {
        printf("You are eligible for a loan");
    } 
    else {
        printf("You are NOT eligible for a loan");
    }
}