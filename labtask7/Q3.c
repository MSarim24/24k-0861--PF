#include<stdio.h>
int main(){
    int array[10]={4,1,6,8,10,21,8,9,2,6},max,min;
    for(int i = 0; i<10; i++){
        if (i==0){
            min = array[i];
            max = array[i];
        }
        else if (array[i]> max){
            max = array[i];
        }
        else if (array[i]<min){
            min = array[i];
        }
    }
    printf("Minimum Number: %d\nMaximum Number: %d\n",min,max);
}