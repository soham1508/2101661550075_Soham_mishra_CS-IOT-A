#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
	int info;
	struct nodetype *next;
}node;
// to insert items at the start of the linked list
void insert_at_beg(node **head,int item)
{
	node *s;
	s=(node*)malloc(sizeof(node));
	s->info=item;
	s->next=*head;
	*head=s;
}
