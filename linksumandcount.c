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
		printf("%d\n",p->data);
		p=p->next;
	}
}
int sum (struct Node *p)
{ int sum=0;
	while(p!=0)
	{
		sum=sum+p->data;
		p=p->next;
	}
	return sum;
	
}
int count (struct Node *p)
{ int count=0;
	while(p!=0)
	{
	    count++;
		p=p->next;
		//count++;
	}
	return count;
	
}
int Rcount(struct Node *p)
{
	int count=0;
	if(p==0)
	return 0;
	else
	return Rcount(p->next)+1;
}
int Rsum(struct Node *p)
{
	int sum=0;
	if(p==0)
	return 0;
	else
	return Rsum(p->next)+p->data;
}
int max(struct Node *p)
{
	int m=-32768;
	while(p!=NULL)
	{
		if(p->data>m)
		{
		m=p->data;
		p=p->next;
	}}
	return m ;
	
}
int Rmax(struct Node *p)
{   int max=-32768;
int x=0;
	if (p==0)
	return max;
	else
	{
	x=Rmax(p->data);
	if(x>p->data)
	return x;
	else return p->data;	
	 } 
}
struct Node* Lsearch(struct Node *p,int key)
{
	while(p!=NULL)
	{
	  if(key==p->data)
	  return p;
	  p=p->next;	
	} return NULL;
}
struct Node* ILsearch(struct Node *p,int key)//function of improved linear search move to head 
{ struct Node*q=NULL;
	while(p!=NULL)
	{
	  if(key==p->data)
	  {
	   q->next=p->next;
	   p->next=first;
	   first=p;
	  }
	  q=p;
	  p=p->next;	
	} 
}
struct Node* Rsearch(struct Node *p,int key)
{
	if(p==NULL)
	return 0;
	if(key==p->data)
	return p;
	else return Rsearch(p->next,key);
}


int main()
{    struct Node *temp=NULL;
	int q1,q,d,r,key, A[]={2,3,4,5,6};
	createlinkedlist(A,5);
	displaylinkedlist(first);
//	d=Rcount(first);
//	r=Rsum(first);
//	printf(" no of elements recursively is %d and its sum is %d \n",d,r);
//	printf("sum of all %d  elements in linked list is %d \n",count(first),sum(first));
//	q=max(first);
//	printf(" maximum element of Linked list is  %d",q);
//	q1=Rmax(first);
//	printf(" maximum element of Linked list recursively is  %d",q1);
    temp=ILsearch(first,5);
	if(temp!=NULL)
	{
		printf("element is found %d",temp->data);
	 }else {
	 
	 printf("element not found");}
	 	displaylinkedlist(first);
	  
	 
//	printf("%d",Lsearch(first,5));
}


