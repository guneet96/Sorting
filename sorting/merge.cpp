#include<iostream>
#define MAX 100
using namespace std;

void merge_sort(int a[], int low, int up);
void merge(int a[], int temp[], int low1, int up1, int low2, int up2);
void copy(int a[], int temp[], int low, int up);

main()
{
	int i,n,a[MAX];
	cout<<"\nEnter number of elements";
	cin>>n;
	cout<<"\nEnter elements in the array : ";
	for(i=0;i<n;i++)
		cin>>a[i];
	merge_sort(a, 0, n-1);
	cout<<"\nSorted array : ";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}

void merge_sort(int a[], int low, int up)
{
	int mid;
	int temp[MAX];
	if(low<up)
	{
		mid = (low+up)/2;
		merge_sort(a, low, mid);
		merge_sort(a, mid+1, up);
		merge(a, temp, low, mid, mid+1, up);
		copy(a, temp, low, up);
	}
}

void merge(int a[], int temp[], int low1, int up1, int low2, int up2)
{
	int i = low1;
	int j = low2;
	int k = low1;
	while((i<=up1) && (j<=up2))
	{
		if(a[i] <= a[j])
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
	}
	while(i<=up1)
		temp[k++] = a[i++];
	while(j<=up2)
		temp[k++] = a[j++];
}

void copy(int a[], int temp[], int low, int up)
{
	int i;
	for(i=low;i<=up;i++)
		a[i] = temp[i];
}
