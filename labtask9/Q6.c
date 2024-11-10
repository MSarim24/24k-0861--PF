#include<stdio.h>
void swapIntegers(int a, int b){
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a: %d\n b: %d\n",a,b);
}
int main(){
    int a , b;
    printf("Enter integer a: ");
    scanf("%d",&a); 
    printf("Enter integer b: ");
    scanf("%d",&b); 
    printf("Before swapping:\n a: %d\n b: %d\n",a,b);
    printf("After swapping:\n ");
    swapIntegers(a,b);
}