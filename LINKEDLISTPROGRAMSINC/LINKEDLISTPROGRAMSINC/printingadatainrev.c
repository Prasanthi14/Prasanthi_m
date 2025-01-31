#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
void disp(struct node*);
void main()
{
	head(1000);
}
void disp(struct node* ptr1)
{
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr!=NULL)
	{
		disp(ptr->link);
		printf("%d\n",ptr->data);
	}
}