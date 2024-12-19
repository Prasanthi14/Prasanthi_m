#include<stdio.h>
void stringrev(char[]);

void main()
{
	char S[]="This is C programming";
	stringrev(S);
	
}
void stringrev(char s[])
{
	int i,l,j;
	char t;
	for(i=0;s[i]!='\0';i++);
	l=i;
	for(i=0,j=l-1;i<j;i++,j--)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;

	}
	printf("reversed string is %s\n",s);
}

