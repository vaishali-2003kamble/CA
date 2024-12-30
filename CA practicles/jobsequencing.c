#include<stdio.h>
void bubbesort(int p[],int d[],int n);
int jobsequencing(int p[],int d[],int n);
int main()
{
	int p[]={50,25,10,15};
	int d[]={2,1,1,2};
	int i;
	int n=sizeof(p)/sizeof(p[0]);
	printf("before sorting profit:-\n ");
	for(i=0;i<n;i++)
	{
		printf(" %d",p[i]);
	}
	printf("before sorting deadline:-\n ");
	for(i=0;i<n;i++)
	{
		printf(" %d",d[i]);
	}

	bubblesort(p,d,n);

	
}
void bubbesort(int p[],int d[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(p[i]<=p[i+1])
			{
				temp=p[i];
				p[i]=p[i+1];
				p[i+1]=temp;
				temp=d[i];
				d[i]=d[i+1];
				d[i+1]=temp;
				
			}
		}
	}
	printf("sorted profit:-\n ");
	for(i=0;i<n;i++)
	{
		printf(" %d",p[i]);
	}
	printf("sorted deadline:-\n ");
	for(i=0;i<n;i++)
	{
		printf(" %d",d[i]);
	}

	
	int profit=jobsequencing(p,d,n);
	printf("maximum profit :- %d",profit);
	
}
int jobsequencing(int p[],int d[],int n)
{
	int i,j,r;
	int slot[100];
	int profit=0;
	int count=0;
	int dmax=0;
	for(i=0;i<n;i++)
	{
		if(d[i]>dmax)
		{
			dmax=d[i];
		}
	}
	for(i=0;i<n;i++)
	{
		slot[i]=0;
	}
	for(r=d[i];r>0;r--)
	{
		if(slot[r]==-1)
		{
			slot[r]=i;
			profit=profit+p[i];
			count++;
			break;
		}
	if(count==dmax)
	{
		break;
	}
	}

	
	
}



