#include<stdio.h>
void is_prime(int a){
    if(a%2 == 0){
        printf("It is a prime number\n");
    }
    else{
        printf("It is not a prime number\n");
    }
}
int main(){
    int num,n;
    printf("Enter how many number you want chaeck: ");
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        printf("Enter num: ");
        scanf("%d",&num);
        is_prime(num);
    }
}