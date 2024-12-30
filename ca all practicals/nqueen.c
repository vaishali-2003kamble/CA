#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int nqueen(int row ,int n,int borad[]);
int place(int row,int col,int board[]);
int main()
{	
	int n,i,row;
	printf("enter number size :- ");
	scanf("%d",&n);
	int board[n];
	if(nqueen(0,n,board))
	{
		for(i=0;i<n;i++)
		{
			printf("queen %d is placed at column %d\n",i+1,board[i]+1);
		}
	}
	else
	{
		printf("solution does not exit %d ",n);
	}
	
}
int nqueen(int row ,int n,int board[])
{	int col;
	if(row==n)
	{
			return 1;
	}

	for(col=0;col<n;col++)
	{
		if(place(row,col,board))
		{
			board[row]=col;
		
		if(nqueen(row+1,n,board))
		{
			return 1;
		}
		}
	}
	return 0;
}
int place(int row,int col,int board[])
{
	int i;
	for(i=0;i<row;i++)
	{
		if(board[i]==col||abs(board[i]-col)==abs(i-row))
		{
			return 0;
		}
	}
	return 1;	
}
