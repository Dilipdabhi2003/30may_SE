#include<stdio.h>
main()
{
	int a[3][2]={1,2,3,4,5,6};
	int b[3][2]={2,5,3,6,2,8};
	int c[3][2];
	int row,col;
	
	printf("----First Matrix----\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<2;col++)
		{
			printf(" %d ",a[row][col]);
		}
		printf("\n");
    }
    printf("----Second Matrix----\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<2;col++)
		{
			printf(" %d ",b[row][col]);
		}
		printf("\n");
}
	printf("----Addition Matrix----\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<2;col++)
		{
			c[row][col]=a[row][col]+b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
}
	printf("----Subtraction Matrix----\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<2;col++)
		{
			c[row][col]=a[row][col]-b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
}
	printf("----Multiplication Matrix----\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<2;col++)
		{
			c[row][col]=a[row][col]*b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
}	
	printf("----Divisional Matrix----\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<2;col++)
		{
			c[row][col]=a[row][col]-b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
}
}
