#include<iostream>
using namespace std;
template <class T>
void swapping(T &a, T &b)
{
	T temp=a;
	a=b;
	b=temp;
}
main()
{
	char a='X',b='Y';
	int x=10 ,y=20;
	
	cout<<"Before Swap A :"<<a<<" | B :"<<b<<endl;
	swapping(a,b);
	cout<<"After Swap A :"<<a<<" | B :"<<b<<endl<<endl;
	
	cout<<"Before Swap X :"<<x<<" | Y :"<<y<<endl;
	swapping(x,y);
	cout<<"After Swap X :"<<x<<" | Y :"<<y<<endl;
	
}
