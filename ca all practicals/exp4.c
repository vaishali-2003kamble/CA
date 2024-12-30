#include<stdio.h>
int quicksort(int arr[],int low,int high);
int partition(int arr[],int low,int high);
int main()
{
	
}
int quicksort(int arr[],int low,int high)
{
	if(low<=high)
	{
		int mid ;
		mid=(low+high)/2;
		quicksort(arr,low,mid);
		quicksort(arr,mid+1,high);
		partition(arr,low,high);
	}
}
int partition(int arr[],int low,int high)
{
	int pivot,i,j;
	pivot=arr[low];
	i=low+1;
	j=high;
	while(i<=j)
}

