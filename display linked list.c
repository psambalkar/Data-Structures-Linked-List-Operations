#include<stdio.h>
#include<stdlib.h>
struct Node 
{
	int data;
	struct Node *next;
	
}*first=NULL;
void createlinkedlist(int A[],int m)
{ int i;
struct Node *p,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;
 for(i=1;i<m;i++)
 {
 	p=(struct Node *)malloc(sizeof(struct Node));
 	p->data=A[i];
 	p->next=NULL;
 	last->next=p;//last next should be p
 	last=p;//last should be the new node p
  } 
}
void displaylinkedlist(struct Node *p)
{
	while(p!=0)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
int main()
{
	int A[]={2,3,4,5,6};
	createlinkedlist(A,5);
	displaylinkedlist(first);
	
}

