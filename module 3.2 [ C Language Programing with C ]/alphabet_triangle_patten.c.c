#include<stdio.h>
main()
{
		
	char row;
	char col;
	
	for(row='A';row<='E';row++)
	{
		for(col='A';col<=row;col++)
		{
			
		printf("%c",col);
			
		}
		printf("\n");
	}

}
