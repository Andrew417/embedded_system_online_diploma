#include<stdio.h>

void main(){

    int len = 0;
    char str[100];

    printf("Enter a string: ");
    fflush(stdin);  fflush(stdout);
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++){
        len++;
    }
    if (str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;  // Adjust the length after removing the newline
    }

    printf("Length of string: %d",len);
}