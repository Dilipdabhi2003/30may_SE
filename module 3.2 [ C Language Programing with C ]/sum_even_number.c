//Sum of Even numbers.....

#include<stdio.h>
main()
{
	int i;
	int sum=0;
	int n;
	printf("Enter the Number :");
	scanf("%d",&n);
	for (i=0;i<=n;i=i+2)
	{
		printf("\n%d",i);
		sum=sum+i;
	}
	printf("\n%d",sum);
}
