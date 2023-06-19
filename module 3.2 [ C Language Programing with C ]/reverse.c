#include<stdio.h>
main()
{
	int number;
	printf("Enter the Number :");
	scanf("%d",&number);
	
	int reverse = 0;
	
	while(number>0)
	{
		reverse = number%10;
		printf("%d",reverse);
		number=number/10;
	}
	
}
