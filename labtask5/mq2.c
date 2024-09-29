#include<stdio.h>
int main(){
    int at,as,er;
    printf("Enter attendance((out of 100): ");
    scanf("%d",&at);
    printf("Enter assignment score(out of 100): ");
    scanf("%d",&as);
    printf("Enter exam result(out of 100): ");
    scanf("%d",&er);
    if (at>80){
        if (as>50){
            if (er>50){
                int total = (at*0.2)+(as*0.3)+(er*0.5);
                if (total>=90){
                    printf("Final grade: A");
                }
                else if (total>=80){
                    printf("Final grade: B");
                }
                else if (total>=70){
                    printf("Final grade: C");
                }
                else if (total>=60){
                    printf("Final grade: D");
                }
                else{
                    printf("Final grade: E");
                }
            }
            else{
                printf("Failed due to less than 50 in exam result");
            }
        }
        else{
            printf("Failed due to less than 50 in assignment");
        }
    }
    else{
        printf("Failed due to low attendance");
    }
}