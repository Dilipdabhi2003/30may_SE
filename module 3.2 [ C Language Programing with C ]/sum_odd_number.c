////Sum of odd numbers there.....

#include<stdio.h>
main()
{
	int i;
	int n;
	printf("Enter the Number :");
	scanf("%d",&n);
	int sum=0;
	for (i=1;i<=n;i=i+2)
	{
		printf("\n%d",i);
		sum=sum+i;
	}
	printf("\n%d",sum);
}
