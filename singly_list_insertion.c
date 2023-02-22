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
	
	count_of_nodes(head);
	add_at_end(head, 67);
	//add_at_begin(head, 60);
	
//	struct node * current = malloc(sizeof(struct node));
//	current -> data = 98;
	//head -> link = current;
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

void add_at_end(struct node * head, int data){
	struct node *ptr, *temp;
	ptr = head;
	temp = (struct node *)malloc(sizeof(struct node));
	temp -> data = i;
	temp -> link = NULL;
	while(ptr -> link!= NULL){
		ptr = ptr-> link;
	}
	ptr -> link = temp;
}

void count_of_nodes(struct node * head){
	int count = 0;
	struct node * ptr = NULL;
	ptr = head;
	if(ptr == NULL){
		printf("Linked list is empty!!");
	}
	while(ptr!=NULL){
		count++;
		ptr = ptr->link;
	}
	printf("Counter=%d", count);
	
}

void print_data(struct node * head){
	if(head==NULL){
		printf("Linked list is empty");
	}
	struct node * ptr = NULL;
	ptr = head;
	while(ptr!=NULL){
		printf("%d", ptr->data);
		printf("\n");
		ptr = ptr->link;
	}
}
