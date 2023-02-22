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
//	
	struct node * current = malloc(sizeof(struct node));
	current -> data = 98;
//	head -> link = current;
//	
//	current = malloc(sizeof(struct node));
//	current -> data =  8;
//	current -> link = NULL;
//	head -> link -> link = current;
//	print_data(head);
//	
//	count_of_nodes(head);
//	add_at_end(head, 67);
	//add_at_begin(head, 60);
	
//	struct node * current = malloc(sizeof(struct node));
//	current -> data = 98;
//	struct node * current = malloc(sizeof(struct node));
//	current -> data = 98;
	head -> link = current;
	int data = 3;
	head = add_at_begin(head, data);
	current = head;
	while(current!=NULL){
		printf("%d", current -> data);
		current = current -> link;
	}
	return 0;
	
}

struct node * add_at_begin(struct node * head, int i){
	current = malloc(sizeof(struct node));
	current -> data = i;
	current -> link = NULL;
	current -> link = head;
	head = current;
	return head;
}
