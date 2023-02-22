#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * link;
};

int main(){
	struct node *head = malloc(sizeof(struct node));
	head -> data = 40;
	head -> link = NULL;
	
	struct node * current = malloc(sizeof(struct node));
	current -> data = 98;
	head -> link = current;
	
	current = malloc(sizeof(struct node));
	current -> data =  8;
	current -> link = NULL;
	head -> link -> link = current;
	print_data(head);
	return 0;
	
}

void print_data(struct node * head){
	if(head==NULL){
		printf("Linked list is empty");
	}
	struct node * ptr = NULL;
	ptr = head;
	while(ptr!=NULL){
		printf("%d", ptr->data);
		ptr = ptr->link;
	}
}
