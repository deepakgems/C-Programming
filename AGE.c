#include<stdio.h>
int main ()
{
	int age;
	printf("enter the age:");
	scanf("%d",&age);
	if(age>=0)
	{
		if(age<=12)
		{
			printf("you are child\n");
		}
		if(age<=19)
		{
			printf("you are teenager\n");
		}
		if(age<=59)
		{
			printf("you are adult\n");
		}
		else
		{
			printf("you are senior\n");
		}
	}
	else
	{
		printf("invalid age");
	}
	return 0;	
}