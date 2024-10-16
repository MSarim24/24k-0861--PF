#include<stdio.h>
int main(){
    int array[9],sum;
    for(int i = 0; i<9; i++){
        printf("Enter the value: ");
        scanf("%d",&array[i]);
        sum  += array[i];
    }
    printf("total: %d\n",sum);
}