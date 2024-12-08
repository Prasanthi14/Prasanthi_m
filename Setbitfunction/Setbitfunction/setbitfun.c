#include<stdio.h>
int set(int,int);
int main()
{
	int a,pos=1,n;
	printf("enter a number:");
	scanf_s("%d",&n);
	a=set(n,pos);
	printf("The value is %d\n",a);
}
int set(int a,int b)
{
	return a|(1<<b);
}