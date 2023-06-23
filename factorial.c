#include<stdio.h>
int factorial(int x)
{
	if(x>1)
	{
	return x*factorial(x-1);
	}
}
main()
{
	int number;
	printf("Enter your Number :");
	scanf("%d",&number);
	printf("%d",factorial(number));
}
