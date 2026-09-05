#include<stdio.h>
int main()
{
	int n,r,original,sum=0;
	printf("Enter the n:");
	scanf("%d",&n);
	original=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==original)
	{
		printf("%d is Armstrong number",original);
	}
	else
	{
		printf("%d is  not Armstrong number",original);
	}
	return 0;
}