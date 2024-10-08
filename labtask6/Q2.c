#include<stdio.h>
int main(){
    int num,count;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0){
        num = num/10;
        count += 1;
    }
    if (count > 1){
        printf("It is a multiple digit number.");
    }
    else{
        printf("it is not a multiple digit number.");
    }
}  