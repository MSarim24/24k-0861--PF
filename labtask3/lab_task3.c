#include<stdio.h>
int main()
{
 //Questio 2
    printf("Question 2\n");
    int num1 = 20;
    int num2 = 35;
    int temp;

    temp = num1; 
    num1 = num2; 
    num2 = temp;
    printf("BEFORE \n num1: 20 and num: 35 \nAFTER \n num1: %d and num2: %d\n",num1,num2);

 //Questio 3
    printf("\n\nQuestion 3\n");

    int salary;
    float tax;
    printf("Enter Salary: ");
    scanf("%d",&salary);

    printf("Enter Tax Rate: ");
    scanf("%f",&tax);

    float tax_amount = salary*(tax/100);
    salary = salary - tax_amount;

    printf("\nTax paid: %.2f\nSalary: %d",tax_amount,salary); 

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

 //Questio 6
    printf("\n\nQuestion 6\n");
    
    int x1 = 5, y1 = 4, x2 = 3, y2 = 2;
    float gradient = (y2-y1)/(x2-x1);
    printf("Gradient: %.2f",gradient);
}