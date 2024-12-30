#include<stdio.h>
int quicksort(int arr[],int low,int high);
int partiotion(int arr[],int low,int high);
int main()
{	
	int n;
	printf("enter size");
	scanf("%d",&n);
	int i,arr[n];
	printf("enter array element ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int low=0;
	int high=n-1;
	quicksort(arr,low,high);
	printf("sorted array ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
	
}
int quicksort(int arr[],int low,int high)
{
	//int mid;
	if(low<=high)
	{
		int j=partiotion(arr,low,high);
		quicksort(arr,low,j-1);
		quicksort(arr,j+1,high);
	}
}
int partiotion(int arr[],int low,int high)
{
	int pivot,i,j;
	pivot=arr[low];
	i=low+1;
	j=high;
	while(i<=j)
	{
		while(arr[i]<pivot)
		{
			i++;
		}
		while(arr[j]>pivot)
		{
			j--;
		}
		if(i<j)
		{
			int tmp;
			tmp=arr[i];
			arr[i]=arr[j];
			arr[j]=tmp;
		}
	}
	arr[low]=arr[j];
	arr[j]=pivot;
	return j;	
}
