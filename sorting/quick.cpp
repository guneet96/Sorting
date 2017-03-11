#include<iostream>
#define MAX 100
using namespace std;

void quick(int a[], int low, int up);
int partition(int a[], int low, int up);
main()
{
        int n, a[MAX], i,j,k,incr;
        cout<<"\nEnter the number of elements : ";
        cin>>n;
        cout<<"\nEnter elements in array : ";
        for(i=0;i<n;i++)
                cin>>a[i];
	quick(a, 0,n-1);
	cout<<"\nSorted array : ";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}

void quick(int a[], int low, int up)
{
	int pivloc;
	if(low >=  up)
		return;
	pivloc = partition(a, low, up);
	quick(a, low, pivloc-1);
	quick(a, pivloc+1, up);
}

int partition(int a[], int low, int up)
{
	int temp, i ,j, pivot;
	i = low+1;
	j = up;
	pivot = a[low];
	while(i <=j)
	{
		while((a[i] < pivot) && (i<up))
			i++;
		while(a[j] > pivot)
			j--;
		if(i<j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
		else
			i++;
	}
	a[low] = a[j];
	a[j]   = pivot;
	return j;
}	
