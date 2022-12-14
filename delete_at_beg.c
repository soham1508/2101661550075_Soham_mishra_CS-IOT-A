#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
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
	head=deleteFirst(head);
	return 0;
}
