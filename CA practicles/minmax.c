#include<stdio.h>
int min;
int max;
void minmax(int arr[],int i,int j);
int main()
{
	int arr[]={10,56,1200,438,90,50};
//	int n=sizeof(arr)/sizeof(arr[0]);
	int low=0,high=5;
	int i=low,j=high;
	//int min,max;
	min=arr[0];
	max=arr[0];
	minmax(arr,i,j);
	printf("minimum number :- %d\nmaximum number %d",min,max);	
}
void minmax(int arr[],int i,int j)
{
	int mid,max1,min1;
	if(i==j)
	{
		min=arr[i];
		max=arr[i];
	}
	else
	{
		if(i==j-1)
		{
			if(arr[i]<arr[j])
			{
				min=arr[i];
				max=arr[j];
			}
			else
			{
				min=arr[j];
				max=arr[i];
			}
		}
		else
		{
		int mid=(i+j)/2;
		minmax(arr,i,mid);
		max1=max;
		min1=min;
		minmax(arr,mid+1,j);
		if(min1<min)
		{
			min=min1;
		}
		if(max1>max)
		{
			max=max1;
		}
		}
	}
	
	
}
