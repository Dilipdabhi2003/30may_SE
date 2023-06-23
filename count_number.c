#include<stdio.h>
main()
{
	char a[100];
	printf("Enter your Number :");
	scanf("%s",&a);
	
	int count=0;
	while(a[count]!=0)
	{
		count++;
	}
	printf("the counting number is : %d ",count);
}
