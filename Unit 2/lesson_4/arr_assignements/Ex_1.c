#include<stdio.h>

void main(){

    float x[2][2];
    float y[2][2];
    int i ,j;

    printf("Enter the elements of the 1st matrix\r\n");
    
    for(i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter a%d%d: ",i+1,j+1);
            fflush(stdin);
            scanf("%f",&x[i][j]);
        }
    }
    printf("\r\nEnter the elements of the 2nd matrix\r\n");
    
    for(i = 0; i < 2;i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter b%d%d: ",i+1,j+1);
            fflush(stdin);  fflush(stdout);
            scanf("%f",&y[i][j]);
        }
    }
    printf("\r\nSum of Matrix: \r\n");

    for(i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%f   ",(x[i][j])+(y[i][j]));
        }
            printf("\r\n");
    }
}