#include<stdio.h>


void main(){

    int x;
    float arr[6];
    float average =0;
    printf("Enter the numbers oof data: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&x);

    for(int i = 0; i < x; i++){
        printf("%d. Enter the number: ",i+1);
        fflush(stdin);  fflush(stdout);
        scanf("%f",&arr[i]);
        average += arr[i];
    }

    printf("Average = %f",average/x);




}