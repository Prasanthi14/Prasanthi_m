#include<stdio.h>
#include<math.h>
void main()
{
	int program;
	printf("enter a program : ");
	scanf_s("%d",&program);
	switch(program)
	{
	case 1:
		{
			int temp,num,n1,count=0,sum;
			printf("enter a number : ");
			scanf_s("%d",&num);
			temp=num;
			while(temp!=0)
			{
				temp/=10;
				count++;
			}
			temp=num;
			for(sum=0,n1=num;n1;)
			{
				int rem=n1%10;
				sum=sum+pow(rem,count);
				n1/=10;
			}
			if(sum==temp)
			{
				printf("armstrong number is %d\n",num);
			}
			else
			{
				printf("not an armstrong number is %d\n",num);
			}

		}
		break;
		
	case 2:
		{
			int num,i=2;
			printf("enter a number: ");
			scanf_s("%d",&num);
			if(num<=1)
			{
				printf("Not prime");
			}
			else
			{
				int is_prime=1;
				while(i<=num/2)
				{
					if(num%i==0)
					{
						is_prime=0;
						break;
					}
					i++;
				}
				if(is_prime)
				{
					printf("prime\n");
				}
				else
				{
					printf("not prime\n");
				}
			}
		}
		break;
	case 3:

		{
			int num,rev=0;
			printf("enter a number : ");
			scanf_s("%d",&num);
			while(num>0)
			{
				int rem=num%10;
				rev=rev*10+rem;
				num/=10;
			}
			printf("reverse number is %d\n",rev);
		}
		break;
	case 4:
		{
			int fact=1,i,n;
			printf("enter a number: ");
			scanf("%d",&n);
			for(i=1;i<=n;i++)
			{
				fact=fact*i;
			}
			printf("%d\n",fact);
		}
		break;
	case 5:
		{
			int i,j,n,k;
			printf("enter no of rows:");
			scanf("%d",&n);
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=6-i;j++)
				{
					printf(" ");
				}
				for(k=1;k<=i;k++)
				{
					printf(" * ");
				}
				printf("\n");
			}
		}
		break;
	case 6:
		{
			int a=0,b=1,c,n,i;
			printf("enter a number: ");
			scanf("%d",&n);
			printf("%d %d ",a,b);
			for(i=2;i<=n;i++)
			{
				c=a+b;
				a=b;
				b=c;
				printf("%d\n",c);
				
			}

		}
		break;
	}
}
