#include<stdio.h>
int main(){
    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}},
    arr2[3][3] = {{10,11,12},{13,14,15},{16,17,18}},
    multarr[3][3];
    for(int i= 0; i<3; i++){
        for(int j = 0; j<3; j++){
            int sum = 0;
            for(int k = 0; k<3; k++){
                sum += arr1[i][k]*arr2[k][j];
            }
            multarr[i][j] = sum;
            printf("%d ",multarr[i][j]);
        }
        printf("\n");
    }
}