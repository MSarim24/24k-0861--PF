#include<stdio.h>
int main(){
    char letter;
    char choice;
    int key;
    printf("Enter a letter: ");
    scanf(" %c",&letter);
    printf("Enter a key: ");
    scanf(" %d",&key);
    printf("Enter E/e (encryption) or D/d (decryption): ");
    scanf(" %c",&choice);
    switch(choice)
    {   
        case 'e':
        case 'E':
            printf("Encrypted: %c",letter^key);
            break;
        case 'd':
        case 'D':
            printf("Decrypted: %c",letter^key);
            break;
        default:
            printf("Invalid choice");
    }
}