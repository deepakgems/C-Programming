#include<stdio.h>
void modifyvalue(int *x)
{
	*x=20;
}
	int main()
	{
	int a=10;
	modifyvalue(&a);
	printf("value of a:%d\n",a);	
	return 0;
}
