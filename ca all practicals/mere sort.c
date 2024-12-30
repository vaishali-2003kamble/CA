#include<stdio.h>
int meresort(int arr[],int low,int high);
int merge(int arr[],int low,int high,int mid);
int c=0;
int main()
{
	int n;
	printf("enter size :- ");
	scanf("%d",&n);
	int i;
	int arr[n];
	int low=0;
	int high=n-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	meresort(arr,low,high);
	for(i=0;i<n;i++)
	{
		printf("\t%d",arr[i]);
	}
}
int meresort(int arr[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		meresort(arr,low,mid);
		meresort(arr,mid+1,high);
		merge(arr,low,high,mid);
	}
}
int merge(int arr[],int low,int high,int mid)
{
	int i,j,k,b[50];
	i=low,j=mid+1,k=low;
	while(i<=mid && j<=high)
	{
		if(arr[i]<arr[j])
		{
			b[k]=arr[i];
			i++;
			k++;
			c++;
		}
		else
		{
			b[k]=arr[j];
			j++;
			k++;
			c++;
		}
	}
	if(i>mid)
	{
		while(j<=high)
		{
			b[k]=arr[j];
			k++;
			j++;
		}
	}
	else if(j>high)
	{
		while(i<=mid)
		{
			b[k]=arr[i];
			k++;
			i++;
		}
	}

	for(i=low;i<high+1;i++)
	{
			arr[i]=b[i];
	}
}
