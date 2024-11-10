#include<stdio.h>
char* even_or_odd(int a ){
    if (a%2==0){
        return "even";
    }
    else{
        return "odd";
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    puts(even_or_odd(num));
}