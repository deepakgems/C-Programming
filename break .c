#include<stdio.h>
int main()
{
	int i,num;
	printf("Enter the num:");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	{
		if(i==5)
		{
			break;
		}
		printf("%d\n",i,num);
	}
	printf("End");
	return 0;
}