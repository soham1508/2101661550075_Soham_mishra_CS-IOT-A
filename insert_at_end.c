
#include<stdio.h>
#include<stdlib.h>
struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
 
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
int main(){
	struct node*head;
	head=(struct node*)malloc(sizeof(struct node));
	head=insertAtEnd(head,56);
	return 0;
}
