#include<stdio.h>
int binarysearch(int arr[],int n,int tar,int high,int low);
int main()
{
	int n,tar,res,i;
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
	printf("enter target element :- ");
	scanf("%d",&tar);
	res=binarysearch(arr,n,tar,high,low);
	if(res!=0)
	{
		printf("element is found at index %d ",res);
	}
	else
	{
		printf("element is not found ");
	}
	
}
int binarysearch(int arr[],int n,int tar,int high,int low)
{
	int mid;
	mid=(low+high)/2;
	
	if(tar==arr[mid])
	{
		return mid;
	}
	else if(tar<arr[mid])
	{
		binarysearch(arr,n,mid-1,tar,low);
	}
	else
	{
		binarysearch(arr,n,mid+1,tar,high);
	}	
}
