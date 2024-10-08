#include<stdio.h>
int main(){
    int sum,num=1;
    while (num != 0){
        printf("Enter a number: ");
        scanf("%d",&num);
        sum  += num;
        printf("Sum:  %d\n",sum);
    }
}
