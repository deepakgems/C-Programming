#include<stdio.h>
int sum (int x,int y)
{

	 x=20;
	 y=20;
	 int c=y+x;
	return c;
}
int main()
{
	int a,b,add;
 	a=10;
	b=10;
	add=sum(a,b);
	printf("value of a =%d\n",a);
	printf("value of b =%d\n",b);
	printf("sum  of  a & b =%d\n",add);
	return 0;
}
