#include<stdio.h>
int main(){
    int num,num1,count;
    printf("Enter a number: ");
    scanf("%d", &num);
    num1 = num;
    while(num != 0){
        num = num/10;
        count += 1;
    }
    if (count > 1){
        printf("It is a multiple digit number\n");
    }
    else{
        printf("it is not a multiple digit number\n");
    }
    if(num1%2 == 0){
        printf("it is an even number\n");
    }
    else{
        printf("it is an odd number\n");
    }
}