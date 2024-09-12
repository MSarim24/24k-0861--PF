#include<stdio.h>
int main(){
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

}