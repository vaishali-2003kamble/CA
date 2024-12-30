#include<stdio.h>
void mergesort(int arr[],int low,int high);
void merge(int arr[],int low,int mid,int high);
int main()
{
	int arr[]={9,8,60,5,40,30};
	int mid,low=0,high=5,i;
	printf("before sorting :-");
	for(i=low;i<=high;i++)
	{
		printf(" %d",arr[i]);
	}
	mergesort(arr,low,high);
	printf("\nafter sorting :-");
	for(i=low;i<=high;i++)
	{
		printf(" %d",arr[i]);
	}
}
void mergesort(int arr[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
void merge(int arr[],int low,int mid,int high)
{
	int h=low,i=low,j=mid+1,k;
	int b[20];
	while((h<=mid) && (j<=high))
	{
		if(arr[h]<=arr[j])
		{
			b[i]=arr[h];
			h++;
		}
		else
		{
			b[i]=arr[j];
			j++;
		}
		i++;
	}
	if(h>mid)
	{
		for(k=j;k<=high;k++)
		{
			b[i]=arr[k];
			i++;
		}
	}
	else if(j>high)
	{
		for(k=h;k<=mid;k++)
		{
			b[i]=arr[k];
			i++;
		}
	}
	for(i=0;i<high+1;i++)
	
	{
		arr[i]=b[i];	
	}
}

