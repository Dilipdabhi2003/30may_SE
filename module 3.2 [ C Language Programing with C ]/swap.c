//WAP to swap two numbers without using third variable...
#include<stdio.h>
main()
{
	int a = 100;
	int b = 150;
	
	a = a + b;
	b = a - b;
	printf("the value of b is %d\n",b);
	
	a = a - b;
	printf("the value of a is %d",a);
}
