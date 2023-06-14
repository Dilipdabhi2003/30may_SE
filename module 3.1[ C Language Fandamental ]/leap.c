//WAP to check if the given year is a leap year or not...
#include<stdio.h>
main()
{
	int year;
	printf("the enter year :");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("this is a leap year");
	}
	else
	{
		printf("this is a not leap year");
	}
	
}
