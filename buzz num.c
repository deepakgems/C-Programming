#include<stdio.h>
int main()
{
	int num;
	printf("enter the num:");
	scanf("%d",&num);
	if(num%7==0 || num%10==7)
	{
	printf("%d is buzz number",num);
	} 
	else
	{
	printf("%d is not buzz number",num);
	}
	return 0;
}