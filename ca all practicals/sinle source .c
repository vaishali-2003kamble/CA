#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define V 9
int main()
{	
	int graph[V][V]={
	
	{
		1,1,1,1,1,1,1,1,1
	},
	{
		2,2,2,2,2,2,2,2,2
	},
	{
		3,3,3,3,3,3,3,3,3,
	},
	
	{
		4,4,4,4,4,4,4,4,4
	},
	
	{
		5,5,5,5,5,5,5,5,5
	},
	{
		6,6,6,6,6,6,6,6,6
	},
	{
		7,7,7,7,7,7,7,7,7,
	},
	{
		8,8,8,8,8,8,8,8,8
	},
	{
		9,9,9,9,9,9,9,9,9
	},
	};
	single(graph,0);
}

int mindistance(int dist[],int setup[])
{
	int min=INT_MAX,minindex;
	int v;
	for(v=0;v<V;v++)
	{
		if(setup[v]==0 && dist[v]<=min)
		{
			min=dist[v];
			minindex=v;
		}
	}
}
int printdis(int dist[],int n)
{
	int i;
	printf("vertex \t\t   minimum distance \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t\t %d\n",i,dist[i]);
	}
}
int single(int graph[V][V],int src)
{
	int dist[V];
	int setup[V];
	int i;
	for(i=0;i<V;i++)
	{
		dist[i]=INT_MAX;
		setup[i]=0;
	}
	dist[src]=0;
	
	int count,v;
	for(count=0;count<V-1;count++)
	{
		
		int u=mindistance(dist,setup);
	setup[u]=1;
		for(v=0;v<V;v++)
		{
			if(!setup[v]&&graph[u][v]&&dist[u]!=INT_MAX &&dist[u]+graph[u][v]<dist[v])
			{
				dist[v]=dist[u]+graph[u][v];
			}
		}
	}
	printdis(dist,V);
}





















