#include<stdio.h>

int product(int  a, int b) {
    if(b==1){
        return a;
    }
    else{
        return  a + product(a,b-1);
    }
}
int prod(int a , int b) {
    int temp = a;
    for (int i = 1; i<b; i++){
        a += temp;
    }
    return a;
}


int main(){
    printf("%d\n",prod(3,10));
    printf("%d\n",product(4,5));
}