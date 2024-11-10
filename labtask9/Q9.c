#include<stdio.h>
#include<string.h>
char* reverse(char str[], int n, char rev[]){
    if (n==0){
        return rev;
    }
    else{
        char temp[2];
        temp[0] = str[n-1];
        temp[1] = '\0';
        strcat(rev,temp);
        return reverse(str, n-1, rev);
    }
}
char* reverse1(char str[],int n){
    for(int i = 0; i<n/2; i++){
        char temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
    return str;
}
int main(){
    char str[256],rev[256]="";
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    puts(reverse1(str,strlen(str)));
}