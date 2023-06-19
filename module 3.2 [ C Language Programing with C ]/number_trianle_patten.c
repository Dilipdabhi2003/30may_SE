#include<stdio.h>
main()
{
	int n;
	printf("Enter the Number :");
	scanf("%d",&n);
	int row;
	int col;
	
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			if(col%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}
