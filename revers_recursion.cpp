#include<stdio.h>
int reverse(int n)
{
	int h;
	while(n!=0)
	{
		h=n%10;
		printf("%d",h);
		n=n/10;
	}
}
main()
{
	int number;
	printf("Enter the number : ");
	scanf("%i",&number);
	
	printf("%d",reverse(number));
}
