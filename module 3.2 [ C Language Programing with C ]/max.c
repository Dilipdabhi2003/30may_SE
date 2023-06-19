#include <stdio.h>
main() {
    int number;
	int max = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0)
	 {
        int h = number % 10;
        if (h > max)
		{
            max = h;
        }
        number /= 10;
    }

    printf("The maximum digit in the number is %d\n", max);

   
}

