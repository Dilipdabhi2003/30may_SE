#include<stdio.h>
main()
{
	int n1=0,n2=1,n3,i,number;
	printf("Enter thw value :");
	scanf("%d",&number);
	
	printf("\n%d%d",n1,n2);
	
	for(i=2;i<=number;i++)
	{
		n3=n2+n1;
		printf("\n%d",n3);
		n1=n2;
		n2=n3;	
	}	
}
