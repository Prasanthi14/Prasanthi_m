/*#include<stdio.h>
void ur_strrev(char*);
void main()
{
	char D[]="Hello";
	ur_strrev(D);
	printf("%s\n",D);
}
void ur_strrev(char* d)
{
	int j,l,i;
	char t=0;
	char* s=d;
	
	for(i=0;*d!='\0';d++,i++);
	l=i;
	d--;
//	printf("%d\n",l);
	for(i=0;i<l/2;s++,d--,i++)
	{
		t=*s;
		*s=*d;
		*d=t;
	}
//	printf("%s\n",s);
	
}
*/
