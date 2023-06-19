#include<stdio.h>
main()
{
	int row;
	int col;
	int k;
	int n=9;
	for(row=1;row<=n;row++)
	{
		for(col=n;col>=row;col--)
		{
			printf(" ");
		}
		for(k=1;k<=row;k++)
		if(row%2!=0)
		{
			printf("* ");
		}
		printf("\n");
	}
}
