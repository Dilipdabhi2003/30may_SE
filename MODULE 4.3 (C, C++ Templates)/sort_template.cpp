#include<iostream>
using namespace std;
template < typename T >
void sort (T a[],int n)
{
	int number ;
	int i;
	int j;
	T temp;
	
	for ( i =0; i <n-1;i++)
	{
		number=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[number])
			number=j;
		}
		if(number != i)
		{
			number = a[i];
			a[i]=a[number];
			a[number]=temp;
		}
	}	
	cout<<"\n Sorted elements are :\n";
	for(i=0;i<n;i++)
	cout<<"\t"<<a[i];
}

main()
{
	int n,i,choice;
	int a[10];
	float b[10];
	do
	{
	cout<<"\n selection sort using function template";
	cout<<"\n 1. sort integer Number :";
	cout<<"\n 2. sort float Number :";
	cout<<"\n 3.Exit, ";
	cout<<"\n Enter your choice:";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\n sortting Integer number";
			cout<<"\n Enter how many number wanted to sort";
			cin>>n;
			for(i=0;i<n;i++)
			cin>>a[i];
			sort<int>(a,n);
			break;
			
		case 2:
			cout<<"\n sortting float number";
			cout<<"\n Enter how many number wanted to sort";
			cin>>n;
			for(i=0;i<n;i++)
			cin>>b[i];
			sort<float>(b,n);
			break;
			
		case 3:
		exit(0);	
		}	
	}
	while(choice !=3);
}
