#include<stdio.h>
int pattern(int,int,int);
int main()
{
	int a,b,n,c;
	printf("enter no of rows:");
	scanf_s("%d",&n);

	pattern(a,b,c);
}
int pattern(int i,int j,int k)
{
	for(i=1;i<=5;i++)
	{
		/*for(p=1;p<=6-i;p++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf(" * ");
		}*/
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=6-i;k++)
		{
			printf(" * ");
		}
		
		printf("\n");
	}
}