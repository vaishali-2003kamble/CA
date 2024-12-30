
#include<stdio.h>
void quicksort(int arr[],int low,int high);
int partition(int arr[],int low,int high);
int main()
{
	int arr[]={65,76,45,3,9,1,8};
	int low=0,high=6,i;
	printf("before sorting :-");
	for(i=low;i<=high;i++)
	{
		printf("  %d",arr[i]);
	}
	
	quicksort(arr,low,high);
	printf("\nsorted array :-");
	for(i=low;i<=high;i++)
	{
		printf("  %d",arr[i]);
	}
	
}
void quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int j=partition(arr,low,high);
		
			quicksort(arr,low,j-1);
			quicksort(arr,j+1,high);
		
	}
}
int partition(int arr[],int low,int high)
{
	int pivot,temp,i,j;
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
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	}
	arr[low]=arr[j];
	arr[j]=pivot;
	return j;
}













