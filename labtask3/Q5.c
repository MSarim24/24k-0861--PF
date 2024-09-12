#include<stdio.h>
int main(){
    //Questio 5
    printf("\n\nQuestion 5\n");

    int P,R,T;
    printf("Value of the principle must be between 100 Rs. To 1,000,000 Rs.\n");
    printf("Enter principle: ");
    scanf("%d",&P);

    printf("\nThe Rate of interest must be between 5 to 10\n");
    printf("Enter Rate: ");
    scanf("%d",&R);

    printf("\nand Time Period must be between 1 to 10 years.\n");
    printf("Enter Time: ");
    scanf("%d",&T);

    float SI = (P*R*T)/100;

    printf("Simple interest is %.2f",SI);
}