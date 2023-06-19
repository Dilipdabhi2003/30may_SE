#include<stdio.h>
main()
{
	int row,col;
	int n='A';
	for(row=1;row<=5;row++)
	{
		
		for(col=1;col<=row;col++)
		{
			printf("%c",n);
			n++;
		}
		printf("\n");
	}
}
