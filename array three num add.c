#include<stdio.h>
int main()
{
	int i,j,row,column,a[10][10],b[10][10],c[10][10];
	printf("Enter the number of row:");
	scanf("%d",&row);
	printf("Enter the number of column:");
	scanf("%d",&column);
	printf("Enter the element for first matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the element for second matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Addition of both matrix are\n");
		for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d  ",c[i][j]);
		}
		printf("  \n");
	}
	return 0;
}