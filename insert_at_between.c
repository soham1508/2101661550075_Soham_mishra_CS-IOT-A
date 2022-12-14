#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct Node * insertAfterNode(struct Node *head, struct Node *prevNode, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
 
    ptr->next = prevNode->next;
    prevNode->next = ptr;
 
    return head;
}
