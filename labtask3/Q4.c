#include<stdio.h>
int main(){
    //Questio 4
    printf("\n\nQuestion 4\n");

    int distance = 1207;
    int f_fuel = 118;
    int b_fuel = 123;
    int fuelavg;

    printf("Enter Car fuel average: ");
    scanf("%d",&fuelavg);

    float consumed = distance/fuelavg;
    float totalcost = consumed*(118+123);

    printf("Total cost: %.2f\nFuel consume: %.2f",totalcost,consumed);

}