#include<stdio.h>
int main(){
    int num,prev=2,mul;
    for(num=1;num>0;){
        printf("%d, ",num);
        mul = num * prev;
        prev = num;
        num = mul;
    }
}