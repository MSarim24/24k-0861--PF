#include<stdio.h>
int main(){
    //Questio 2
    printf("Question 2\n");
    int num1 = 20;
    int num2 = 35;
    int temp;

    temp = num1; 
    num1 = num2; 
    num2 = temp;
    printf("BEFORE \n num1: 20 and num: 35 \nAFTER \n num1: %d and num2: %d\n",num1,num2);

}