//WAP to print faactorial of given number

#include<stdio.h>
main()
{
	int i;
	printf("Enter a Number :");
	scanf("%d",&i);
	int mul=1;
	
	for(i=i;i>=1;i--)
	{
		printf("\n%d",i);
		mul=mul*i;
	}
	printf("\nfactorial of number%d",mul);
}
