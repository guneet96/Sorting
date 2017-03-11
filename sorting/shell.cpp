#include<iostream>
#define MAX 100
using namespace std;

main()
{
	int n, a[MAX], i,j,k,incr;
	cout<<"]nEnter the number of elements : ";
	cin>>n;
	cout<<"\nEnter elements in array : ";
	for(i=0;i<n;i++)
		cin>>a[i];
		
	cout<<"\nEnter the maximum increament (odd value) ";
	cin>>incr;
	
        // Shell sort


	while(incr >= 1)
	{
		for(i=incr;i<n;i++)
		{	
			k = a[i];
			for(j=i-incr;j>=0 && k<a[j];j=j-incr)
				a[j+incr] = a[j];
			a[j+incr] = k;
		}
		incr-=2;
	}
	cout<<"\nSorted array : ";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";

}
