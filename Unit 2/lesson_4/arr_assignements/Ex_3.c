#include<stdio.h>

void main(){

    int rows,col;
    printf("Enter rows and colmuns of matrix: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d %d",&rows,&col);

    int Matrix[rows][col], transMatrix[col][rows];

    printf("Enter elements of matrix: \r\n");
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            printf("Enter elements of a%d%d: ",i+1,j+1);
            // fflush(stdin);  fflush(stdout);
            scanf("%d",&Matrix[i][j]);
            transMatrix[j][i]=Matrix[i][j];
        }
    }
    printf("Entered matrix: \r\n");
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            printf("%d  ",Matrix[i][j]);
        }
            printf("\r\n");
    }

    printf("Transpose of matrix: \r\n");
    
    for(int i = 0; i < col; i++){
        for(int j = 0; j < rows; j++){
            printf("%d  ",transMatrix[i][j]);
        }
            printf("\r\n");
    }


}