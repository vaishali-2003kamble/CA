#include<stdio.h>
int sumofsubset(int cs,int k,int r);
int x[10],w[10],d,count=0;
int main()
{
	int n,sum=0;
	printf("enter size ");
	scanf("%d",&n);
	int i;
	printf("enter number in acendeing order ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&w[i]);
	}
	
	printf("enter capacity ");
	scanf("%d",&d);
	for(i=0;i<n;i++)
	{
		sum=sum+w[i];
	}
	if(sum>d)
	{
		printf("no solution");
	}
	sumofsubset(0,0,sum);
	if(count==0)
	{
		printf("no solution");
	}
	
}
int sumofsubset(int cs,int k,int r)
{
	 x[k]=1;
	 int i;
	 if(cs+w[k]==d)
	 {
	 	printf(" \nsubset %d",count++);
	 	for(i=0;i<=k;i++)
	 	{
	 		if(x[i]==1)
	 		{
	 			printf("\t%d",w[i]);
			 }
		}
	 }
	 else if(cs+w[k]+w[k+1]<=d)
	 {
	 	sumofsubset(cs+w[k],k+1,r-w[k]);
	 }
	 if(cs+r-w[k]>=d && cs+w[k]<=d)
	 {	x[k]=0;
	 	sumofsubset(cs,k+1,r-w[k]);
	 }
	
}
