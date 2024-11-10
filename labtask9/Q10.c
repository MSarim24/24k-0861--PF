#include<stdio.h>
int arr[2];
int* max_min(int num[]){
    int min = 9999,max = 0;
    for(int i = 0;i<6;i++){
        if(num[i] > max){
            max = num[i];
        }
        if(num[i] < min){
            min = num[i];
        }  
    }
    arr[0] = min;
    arr[1] = max;
    return arr;
}
int main(){
    int  num[6];
    for(int i = 0;i<6;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&num[i]);
    }

    int* arr = max_min(num);
    printf("Max: %d\n",arr[0]);
    printf("Min: %d\n",arr[1]);

}