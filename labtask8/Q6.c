#include<stdio.h>
int main(){
    int height;
    printf("Enter your height of triangle: ");
    scanf("%d",&height);
    for(int i = 0; i < height; i++){
        for(int j = 0 ; j < height - i; j++){
            printf(" ");
        }
        for(int k = 0; k<=i; k++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i = height-1; i > 0; i--){
        for(int j = 0 ; j <= height - i; j++){
            printf(" ");
        }
        for(int k = 0; k<i; k++){
            printf("* ");
        }
        printf("\n");
    }
    
}
