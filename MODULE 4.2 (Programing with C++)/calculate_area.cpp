#include<iostream>
using namespace std;
int calculate(int area,int breadth)
{
	int rectangle = area * breadth;
	return rectangle;	
}
float calculate(float area,float breadth)
{
	int triangle = area * breadth * 0.5;
	return triangle;
}
float calculate(float area)
{
	float circle = 3.14 * area * area;
	return circle;
};
main()
{
	cout<<"Area of Rectangle :"<<calculate(100,50)<<endl;
	cout<<"Area of triangle :"<<calculate(10,5)<<endl;
	cout<<"Area of Circle :"<<calculate(100)<<endl;
}
