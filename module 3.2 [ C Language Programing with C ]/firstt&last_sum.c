#include<stdio.h>

int main() {
    int number, FD, LD, sum;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    FD = number;
    while(FD >= 10)
	{
        FD /= 10;
    }
 
    LD = number % 10;

	 sum = FD+LD;

    printf("The sum of first and last digit is: %d\n", sum);
    
    
}

