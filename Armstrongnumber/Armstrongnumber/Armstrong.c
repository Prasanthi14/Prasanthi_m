#include<stdio.h>
#include<math.h>
void main()
{
	int num,temp,s,n1,count=0;
	printf("enter a number: ");
	scanf_s("%d",&num);
	temp=num;
	while(temp!=0)
	{
		temp/=10;
		count++;
	}
	temp=num;
	for(s=0,n1=num;n1;)
	{
		int rem=n1%10;
		s=s+pow(rem,count);
		n1/=10;
	}
	if(s==temp)
	{
		printf("armstrong number : ");
	}
	else
	{
		printf("not an armstrong number : ");
	}
	
}

	


	




