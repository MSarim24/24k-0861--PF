#include<stdio.h>
int main(){
    int arr[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("enter element[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i = 0; i<3; i++){
        int small = 9999,large = 0;
        for(int j = 0; j<3; j++){
            if(small > arr[i][j]){
                small = arr[i][j];
            }
        }
        for(int k=0 ; k<3; k++){
            if(large < arr[k][i]){
                large = arr[k][i];
            }
        }
        if (small == large){
            printf("The matrix saddle point: %d\n",small);
        }
    }

}