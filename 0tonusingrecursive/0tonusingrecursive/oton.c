#include<stdio.h>

int i=1;
int n;
void fun();

void main()
{
	printf("enter a number ");
	scanf("%d",&n);
	fun();
	//return 0;
}
void fun()
{
	if(i>n)
	{
		return ;
	}
	printf("value is %d\n",i);
	i++;
	fun();
}