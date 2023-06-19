#include<stdio.h>
main()
{
	int row,col;
	int n=1;
	for(row=0;row<=4;row++)
	{
		
		for(col=0;col<=row;col++)
		{
			printf("%d",n);
			n++;
		}
		printf("\n");
	}
}
