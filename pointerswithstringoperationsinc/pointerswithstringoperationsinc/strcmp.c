/*#include<stdio.h>
int ur_strcmp(const char*,const char*);
void main()
{
	char D[]="Hello";
	char S[]="Hello";
	char z=ur_strcmp(D,S);
	printf("%d\n",z);
}
int ur_strcmp(const char* d,const char* s)
{
	while(*d == *s && *d!='\0' && *s!='\0')
	{
		s++;
		d++;
	}
	return ((*d-*s)?1:0);
}
*/