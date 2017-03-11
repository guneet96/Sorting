#include<iostream>
#define MAX 100
using namespace std;
void heap_sort(int a[], int size);
void buildHeap(int a[], int size);
int del_root(int a[], int *size);
void restoreDown(int a[], int i, int size);
void display(int a[], int n);
main()
{
        int n, a[MAX],i;
        cout<<"]nEnter the number of elements : ";
        cin>>n;
        cout<<"\nEnter elements in array : ";
        for(i=1;i<=n;i++)
                cin>>a[i];
	cout<<"\nThe entered list is : ";
	display(a, n);
	heap_sort(a, n);
	cout<<"\nSorted array is : ";
	display(a, n);
}

void heap_sort(int a[], int size)
{	
	int max;
	buildHeap(a, size);
	cout<<"\nHeap is : ";
	display(a, size);
	while(size > 1)
	{
		max = del_root(a, &size);
		a[size+1] = max;
	}
}

void buildHeap(int a[], int size)
{
	int i;
	for(i = size/2; i>=1; i--)
		restoreDown(a, i, size);
}

int del_root(int a[], int *size)
{
	int max = a[1];
	a[1] = a[*size];
	(*size)--;
	restoreDown(a, 1, *size);
	return max;
}

void restoreDown(int a[], int i, int size)
{
	int left = 2*i, right = left+1;
	int num = a[i];
	while(right <= size)
	{
		if(num>=a[left] && num>=a[right])
		{
			a[i] = num;
			return;
		}
		else if(a[left] > a[right])
		{
			a[i] = a[left];
			i = left;
		}
		else
		{
			a[i] = a[right];
			i = right;
		}
		left = 2*i;
		right = left +1;
	}
	if(left == size && num < a[left])
	{
		a[i] = a[left];
		i = left;
	}
	a[i] = num;
}

void display(int a[], int n)
{
	int i;
	cout<<"\n";
	for(i=1;i<=n;i++)
		cout<<a[i]<<" ";

}

