#include<stdio.h>
#include<string.h>
int main(){
    char str[5][256] = {"hello","my","name","is","sarim"};
    char word[256];
    int found = 0;
    printf("Enter the word: ");
    scanf("%s",word);
    for(int i = 0; i<5; i++){
        if (strcmp(str[i],word) == 0){
            printf("Word found at index %d\n",i);
            found = 1;
        }
    }
    if (found == 0){
        printf("Word not found\n");
    }
}
