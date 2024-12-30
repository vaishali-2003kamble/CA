#include<stdio.h>
int minmax(int arr[],int low,int high,int *min,int *max );
int main()
{
	int n,i,min,max;
	printf("enter size of array :- ");
	scanf("%d",&n);
	int arr[n];
	printf("enter array emlemnt :- ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int low=0;
	int high=n-1;
	minmax(arr,low,high,&min,&max);
	printf("maximum number %d\n",max);
	printf("minimum number %d",min);
	
	
}
int minmax(int arr[],int low,int high,int *min,int *max )
{	
	int i=low,j=high,max1,min1,max2,min2;
	if(i==j)
	{
		*max=arr[i];
		*min=arr[i];
	}
	if(j==i+1)
	{
		if(arr[i]<arr[j])
		{
			*max=arr[j];
			*min=arr[i];
		}
		else
		{
			*max=arr[i];
			*min=arr[j];
		}
	}
	else
	{
		int mid;
		mid=(i+j)/2;
		minmax(arr,mid,i,&min1,&max1);
		minmax(arr,mid+1,j,&min2,&max2);
		if(max1>max2)
		{
			*max=max1;
		}
		else
		{
			*max=max2;
		}
		if(min1<min2)
		{
			*min=min1;
		}
		else
		{
			*min=min2;
		}
	}
}
