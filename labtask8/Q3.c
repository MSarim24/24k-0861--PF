#include<stdio.h>
int main(){
    //Generate a pattern of odd numbers in decreasing order starting from a user-specified number using nested loops.
    int start;
    printf("Enter the starting odd number: ");
    scanf("%d", &start);
    for (int i = start; i > 0; i--) {
        if (i%2 != 0) {
            for(int j = i;  j > 0; j--){
                if(j % 2 != 0){
                    printf("%d ", j);
                }
            }
            printf("\n");
        }
    }
}