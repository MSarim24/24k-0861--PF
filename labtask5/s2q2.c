#include<stdio.h>
int main(){
    int age;
    char nationality;
    printf("Enter your nationality: ");
    scanf("%c",&nationality);
    printf("Enter your age: ");
    scanf("%d",&age);
    if (nationality=='p' & age>=18){
        printf("your eligilble to vote");
    }
    else{
        printf("your not eligible");
    }
}
