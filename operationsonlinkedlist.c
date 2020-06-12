#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next; 
} *first=NULL;
void createlist(int A[],int m)
{   struct node *p,*last;
	first= (struct node *)malloc(sizeof(struct node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	int i;
	for(i=1;i<m;i++)
	{   p=(struct node *)malloc(sizeof(struct node));
		p->data=A[i];
		p->next=NULL;
		last->next=p;
		last=p;
	}
}
void display(struct node *p)
{
	while(p!=NULL)
	{   	printf("%d ",p->data);
		p=p->next;
		//printf("%d",p->data);
	}
}
void insert(int pos,int x)
{   if(pos==0)
{
	struct node *t;
	t=(struct node *)malloc(sizeof(struct node ));
	t->data=x;
	t->next=first;
	first=t;
}
else
{    //p=(struct node *)malloc(sizeof(struct node));
	struct node *t,*p;
	int i;
	t=(struct node *)malloc(sizeof(struct node ));
	p=(struct node *)malloc(sizeof(struct node));
    p=first;
	for(i=0;i<=pos-1&&p!=NULL;i++)
	{ p=p->next;
		}if(p!=NULL)
		{ t->next=p->next;
		  p->next=t;
		  
		
			
			}	
	
}
	 
}
int main()
{
	int A[]={2,3,1,5,6,7,8};
	createlist(A,7 );
	insert(2,10);
	display(first);
}
