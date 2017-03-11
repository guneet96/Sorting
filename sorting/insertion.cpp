#include<iostream>

using namespace std;

main()
{
	int a[100], i,j,n,key;
	cout<<"\nEnter the number of elements : ";
	cin>>n;
	cout<<"\nEnter the elements in the array : ";
	for(i=0;i<n;i++)
		cin>>a[i];
	
	// Insertion Sort 
	
	for(i=1;i<n;i++)
	{
		key = a[i];
		j = i-1;
		while(j>=0 && a[j] > key)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
	cout<<"\nSorted array : ";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}
