#include<stdio.h>

void main()
{
	char s[]="Hello";
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			s[i]=s[i]-32;
		}
		else if(s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i]=s[i]+32;
		}
		else
		{
			printf("invalid input");
		}
		i++;


	}
	printf("Uppercase letter is %s\n",s);
}