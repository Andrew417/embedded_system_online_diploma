#include<stdio.h>

void main(){

    int freq = 0;
    char ch, str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to find frequency: ");
    fflush(stdin);     fflush(stdout);
    scanf("%c",&ch);


    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'e')
            freq++;
    }
    printf("frequency of %c: %d",ch,freq);


}