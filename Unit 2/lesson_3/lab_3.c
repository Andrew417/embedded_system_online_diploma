#include "stdio.h"

int main(){
	int x,y;
	printf("Enter two numbers: ");
	scanf("%d \r\n %d", &x,&y);
	printf("the minimum is : %d\r\n",(x>y)?y:x);
}
