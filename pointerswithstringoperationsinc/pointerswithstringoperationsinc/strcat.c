#include<stdio.h>
void ur_strcat(char*,char*);
void main()
{
	char D[20]="hello";
	char S[]="Hi";
	ur_strcat(D,S);
	printf("%s\n",D);
}
void ur_strcat(char* d,char* s)
{

	while(*d!='\0')
	{
		d++;
	}
	while(*s!='\0')
	{
		*s=*d;
		s++;
		d++;
	}
	*d='\0';
}