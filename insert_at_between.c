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
int main(){
	struct node*head;
	head=(struct node*)malloc(sizeof(struct node));
	third = (struct Node *)malloc(sizeof(struct Node));
	 head->data = 1;
    head->next = third;
	 third->data = 41;
         third->next = NULL;
	head=insert_in_between(head,third,56);
	return 0;
}
