#include<stdio.h>
main()
{
	int arr[100], i, j, temp, n;
	printf("\nEnter the number of elements : ");
	scanf("%d", &n);
	printf("\nEnter elements in the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];		
				arr[j+1] = temp;
			}
		}
		
	}
	printf("\nSorted list is : ");
	for(i=0;i<n;i++)
		printf("%d ", arr[i]);
}
