#include<stdio.h>
#include<stdlib.h>

struct LinkedList{
	int data;
	struct LinkedList *next;
};

typedef struct LinkedList *node;

node createNode(){

	node temp;
	temp = (node)malloc(sizeof(node));
	temp->next = NULL;
	return temp;
}
void addNode(node head, int value){

	node temp,p;
	p = head;
	temp = createNode();
	temp->data = value;
	while(p->next != NULL){
	    p = p->next;
	}
	p->next = temp;
}
void printList(node head){

	node p;
	p = head;
	while(p->next != NULL){//Enter the last node condition here
		printf("%d\n",p->data);//Enter the code to access data field of the node
		p=p->next;
	}
}
void main() {
	node head;
	head = (node)malloc(sizeof(node));
	head->next = NULL;
	addNode(head, 1);
	addNode(head, 2);
	addNode(head, 3);
	addNode(head, 4);
	printList(head);
}
