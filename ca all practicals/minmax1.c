#include<stdio.h>
int minmax(int arr[],int low,int high,int *min,int *max);
int main()
{
	int n,low=0,min,max,i;
	printf("enter size ");
	scanf("%d",&n);
	int arr[n];
	printf("enter array element ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int high=n-1;
	minmax(arr,low,high,&min,&max);
	printf("minimum number :-  %d\n",min);
	printf("maximum number :- %d",max);
	
	
}
int minmax(int arr[],int low,int high,int *min,int *max)
{
	int mid,min1,min2,max1,max2;
	if(low==high)
	{
		*min=arr[low];
		*max=arr[low];
		return;
	}
	if(high==low+1)
	{
		if(arr[low]>arr[high])
		{
			*min=arr[low];
			*max=arr[high];
		}
		else
		{
			*min=arr[high];
			*max=arr[low];
		}
	}
	mid=(low+high)/2;
	minmax(arr,low,mid,&min1,&max1);
	minmax(arr,mid+1,high,&min2,&max2);
	if(min1<min2)
	{
		*min=min1;
	}
	else
	{
		*min=min2;
	}
	if(max1>max2)
	{
		*max=max1;
	}
	else
	{
		*max=max2;
	}
	
	
	
}
