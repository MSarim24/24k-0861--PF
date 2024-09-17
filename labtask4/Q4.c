#include<stdio.h>
int main(){
    float amount,savedamnt;
    printf("Enter the amount of your purchse: ");
    scanf("%f",&amount);
    if (amount< 500){
        printf("you'r not eligible for discount.");
    }
    else if (amount>= 500 && amount<2000){
         savedamnt = amount*0.05;
    }
    else if (amount>=2000  && amount<=4000){
         savedamnt = amount*0.1;
    }
    else if (amount> 4000 && amount<=6000){
         savedamnt = amount*0.2;
    }
    else {
         savedamnt = amount*0.35;
    }
    float totalamnt = amount - savedamnt;
    printf("Actual amount: %.2f\nSaved amount: %.2f\nAmount after discount: %.2f",amount,savedamnt,totalamnt);
}