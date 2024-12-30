#include<stdio.h>
int binarysearch(int arr[],int low,int high,int x);
int main()
{
	int n,result,low,high,target,i;
	printf("enter size of array :-");
	scanf("%d",&n);
	int arr[n];
	printf("enter array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	low=0,high=n-1;
	printf("enter target element :-");
	scanf("%d",&target);
	result=binarysearch(arr,low,high,target);
	if(result!=-1)
	{
		printf("%d element is found at index :- %d",target,result);
	}
	else
	{
		printf("element is not found %d",target);
	}
}
int binarysearch(int arr[],int low,int high,int target)
{
	if(high>=low)
	{
		if(target==arr[low])
		{
			return low;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		int mid;
		mid=(low+high)/2;
		if(target==arr[mid])
		{
			return mid;
		}
		else if(target<arr[mid])
		{	
			return binarysearch(arr,low,mid-1,target);
		}
		else 
		{	
			return binarysearch(arr,high,mid+1,target);
		}
			return -1;
	}

}
