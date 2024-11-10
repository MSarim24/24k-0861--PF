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
int main(){
    char str[5][20] = {"racecar","hello","madam","level","radar"};
    for(int i = 0; i<5; i++){
        char rev[20] = "";
        if(strcmp(str[i],reverse(str[i],strlen(str[i]),rev)) == 0){
            printf("%s is a palindrome\n",str[i]);
        }
        else{
            printf("%s is not a palindrome\n",str[i]);
        }
    }
}