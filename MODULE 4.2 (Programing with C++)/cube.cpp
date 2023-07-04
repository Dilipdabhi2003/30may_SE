#include<iostream>
using namespace std;
inline int cube(int x)
{
	int result=x*x*x;
	return result;
}
main()
{
	cout<<"Cube is :"<<cube(2);
}
