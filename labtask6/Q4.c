#include<stdio.h>
int main(){
    int num,prev=0,sum;
    for(num=1;num<13;){
        sum = num + prev;
        prev = num;
        num = sum;
        printf("%d, ",num);
    }
}