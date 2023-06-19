#include <stdio.h>

int main() {
    int number,i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

   
    while (number != 0)
	 {
        i= number % 10;  
        sum=sum+i;
        number= number / 10;  
    }

    printf("The digit sum of is %d.", sum);
    
}

