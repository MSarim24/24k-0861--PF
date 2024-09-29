#include<stdio.h>
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if (year%4==0 & year%100 != 0){
        printf("Its a leap year...");
    }
    else if (year%400 ==0 ){
        printf("Its a leap year...");
    }
    else {
        printf("its not a leap year...");
    }
}