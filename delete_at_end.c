#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct Node * deleteAtLast(struct Node * head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = NULL;
    free(q);
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
	head=deleteAtLast(head);
	return 0;
}

