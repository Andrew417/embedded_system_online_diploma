#include<stdio.h>

void main(){

    int arrSize , insertedElement , elementLocation;

    printf("Enter no of elements : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d", &arrSize);

    int arr[arrSize+1];

    for(int i = 0; i < arrSize; i++){// to initialize the array
        arr[i]=i+1;
        printf("%d ",arr[i]);
    }
    printf("\r\n");

    printf("Enter the element to be inserted : ");// to get the value of element
    fflush(stdin);  fflush(stdout);
    scanf("%d", &insertedElement);

    printf("Enter the location : "); // to locate the element
    fflush(stdin);  fflush(stdout);
    scanf("%d", &elementLocation);

    for(int i = arrSize ; i != 0; i--){ // for inserting the element at its position

        arr[i] = arr[i-1];
        if(i == elementLocation-1)
        {
            arr[i] = insertedElement;
            break;
        }
    }
    for(int i = 0; i < arrSize+1; i++){
        printf("%d ",arr[i]);
    }
}