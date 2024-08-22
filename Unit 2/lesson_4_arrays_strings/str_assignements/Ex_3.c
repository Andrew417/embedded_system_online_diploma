#include<stdio.h>
#include<string.h>

void main(){

    char str[100];
    char revStr[100];
    
    printf("Enter the string : ");
    fflush(stdin);  fflush(stdout);
    scanf("%s" ,str);

    for(int i = strlen(str)-1; i >= 0; i--){
        revStr[strlen(str)-1-i]=str[i];
    }

    revStr[strlen(str)+1]='\0';
    printf("Reverse string is : %s",revStr);

}