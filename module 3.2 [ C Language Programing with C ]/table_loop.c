//WAP to print a table up to given numbers...

#include<stdio.h>
main()
{
	int i;
	int n;
	printf("Enter an Number:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d * %d = %d",n,i,n*i);
	}
}

