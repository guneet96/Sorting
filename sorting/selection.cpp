#include<stdio.h>
#include<iostream>

using namespace std;


main()
{
	int a[100],n,i,j,temp,min;
	cout<<"\nEnter the number of elements : ";
	cin>>n;
	cout<<"\nEnter elements in the array : ";
	for(i=0;i<n;i++)
		cin>>a[i];
	
	// Selection Sort
	
	for(i=0;i<n-1;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(a[min] > a[j])
				min = j;
		}
		if(i!=min)
		{
			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
	}
	cout<<"\nSorted array is : \n";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}
