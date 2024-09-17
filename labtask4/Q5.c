#include<stdio.h>
int main(){
    int customerid,unit;
    float total,surcharge;
    char name;
    printf("Enter customer id: ");
    scanf("%d",&customerid);
    printf("Eneter the first letter of your name: ");
    scanf(" %c",&name);
    printf("Enter Unit consumed: ");
    scanf("%d",&unit);
    printf("\ncustomer ID: %d",customerid);
    printf("\nName: %c",name);
    printf("\nUnits Consumed: %d\n",unit);

    if (unit>0 & unit<= 199){
        total = unit*16.2;
        printf("Amount Charges @Rs.16.20 per unit: %.2f",total);
    }
    else if (unit>=200 & unit<300){
        total = unit*20.10;
        printf("Amount Charges @Rs.20.10 per unit: %.2f",total);
    }
    else if (unit>=300 & unit<500){
        total = unit*27.10;
        printf("Amount Charges @Rs.27.10 per unit: %.2f",total);
    }
    else {
        total = unit*35.90;
        printf("Amount Charges @Rs.35.90 per unit: %.2f",total);
    }
    if (total>18000){
        surcharge = total*0.15;
    }
    printf("\nSurcharge Amount: %.2f",surcharge);
    total = total + surcharge;
    printf("\nNet Amount Paid by the Customer: %.2f",total);
}