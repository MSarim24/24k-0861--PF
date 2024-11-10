#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* str(char src[], char dest[],int n){
    char temp[2];
        for (int i = 0; i < n; i++){
        temp[0] =  src[i];
        temp[1] = '\0';
        strcat(dest,temp);
    }
    return dest;


}
int i=0;
char* str1(char src[], char dest[],int n){
    char temp[2];
    if(n==0){
        return dest;
    }
    else{
        temp[0] =  src[i++];
        temp[1] = '\0';
        strcat(dest,temp);
        return str1(src,dest,n-1);
    }
}
int main(){
    char src[256];
    char dest[256] = "";
    int n;
    printf("Enter the string: ");
    fgets(src,sizeof(src),stdin);
    printf("Enter the number of characters: ");
    scanf("%d",&n);
    puts(str1(src,dest,n));
}
/*
src = "hi my name is sarim"
dest = ""
int = 2
dest = "hi"
int = 5
dest = "hi my"
*/