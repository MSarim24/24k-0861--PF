#include<stdio.h>
int main(){
    char character;
    printf("Eter any character: ");
    scanf(" %c",&character);
    if(character>=65 && character<=90){
        printf("It is a capital alphabet"); 
    }
    else if(character>=97 && character<=122){
        printf("It is a small alphabet");
    }
    else if (character>=48 && character<=57){
        printf("It is a digit");

    }
    else if (character>=33 && character<=47){
        printf("It is a special character");

    }
}