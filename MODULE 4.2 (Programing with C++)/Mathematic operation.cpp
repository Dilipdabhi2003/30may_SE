#include<iostream>
using namespace std;
int addition(int num1,float num2)
{
	return num1+num2;
}
int subtraction(int num1,int num2,float num3)
{
	return num1-num2-num3;
}
int multiplication(int num1,double num2)
{
	return num1*num2;
}
int division(int num1,int num2)
{
	return num1/num2;
}
main()
{
	cout<<"\nAddition of number 1 and number 2 is :"<<addition(100,50);
	cout<<"\nSubtraction of number 1 and number 2 and number 3 :"<<subtraction(250,100,50);
	cout<<"\nMultiplication of number 1 and number 2 :"<<multiplication(100,20);
	cout<<"\nDivision of number 1 and number 2 :"<<division(100,50);
}
