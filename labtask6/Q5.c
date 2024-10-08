#include<stdio.h>
int main(){
    int num,i;
    printf("Enter first number: ");
    scanf("%d",&num);
    printf("%d ",num);
    for(i=2;num>0;i++){
        num = num/i;
        printf("%d, ",num);
    }
}