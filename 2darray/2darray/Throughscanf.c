#include<stdio.h>
void main()
{
	int i,j,rows,cols;
	int a[2][3];
	int n;
	printf("enter no of rows : ");
	scanf_s("%d",&rows);
	printf("enter no of cols : ");
	scanf_s("%d",&cols);
	//read data from console
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d:%d",i,j);
			scanf_s("%d\t",&a[i][j]);
		}
	}
	//print data
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d\n",a[i][j]);
		}
	}
}