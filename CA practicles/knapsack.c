#include<stdio.h>
void knapsack(int n,float p[],float w[],float m);
int main()
{
	int n=3;
	float m;
	float p[]={25,24,15};
	float w[]={18,15,10};
	for(i=0;i<n;i++)
	{
		
	}
	
	m=20;
	knapsack(n,p,w,m);
}
void knapsack(int n,float p[],float w[],float m)
{
	int i,j;
	float profit=0;
	float r[n],temp;
	for(i=0;i<n;i++)
	{
		r[i]=p[i]/w[i];	
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(r[j]>r[i])
			{
				temp=r[j];
				r[j]=r[i];
				r[i]=temp;
				
				temp=p[j];
				p[j]=p[i];
				p[i]=temp;
				
				temp=w[j];
				w[j]=w[i];
				w[i]=temp;
				
			}
		}
	}
	printf(" sorted profit:- ");
	for(i=0;i<n;i++)
	{
		printf("  %.2f",p[i]);
	}
	printf(" \nsorted weight:- ");
	for(i=0;i<n;i++)
	{
		printf("  %.2f",w[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(m>0 && w[i]<=m)
		{
			m=m-w[i];
			profit=profit+p[i];
		}
		else
		{
			break;
		}
	}
	if(m>0)
	{
		profit=profit+p[i]*m/w[i];
	}
	printf("\nmaximum profit :- %.2f",profit);
}
