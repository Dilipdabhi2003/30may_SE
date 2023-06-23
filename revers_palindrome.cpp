// WAP to reverse a string and check that the string is palindrome or not.... 

#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	
	printf("Enter a string to if it's a palindrome :\n");
	gets(a);
	
	strcpy(b,a); // Copying input string
	strrev(b);  // Reverse the string
	
	if(strcmp(a,b)==0) //Comparing input string with the reverse string
	printf("The string is a palidrome.\n");
	else
	printf("The string isn't a palidrome.\n");
}
