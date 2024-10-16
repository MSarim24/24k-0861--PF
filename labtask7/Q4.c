#include<stdio.h>
int main(){
    int N,i;
    printf("Array size = ");
    scanf("%d",&N);
    int array[N],count[N];
    for(i=0; i<N; i++){
        printf("Element %d = ",i+1);
        scanf("%d",&array[i]);
        count[i] = 0;
    }
    for(i=0; i<N; i++){
        count[array[i]]++;
    }
    printf("Number ");
    for(i=0;i<N;i++){
        if (count[i]>1){
            printf("%d, ",i);
        }
    }
    printf("in array occur more than once");
    
}