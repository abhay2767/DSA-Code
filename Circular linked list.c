#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node * next;
};

void LinkedListTraversal(struct Node * head)
{
	struct Node * ptr = head;
	
	do{
		printf("Element: %d\n",ptr->data);
		ptr = ptr->next;
	}while(ptr != head);
}

struct Node * InsertAtFirst(struct Node * head, int data)
{
	struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
	//dynmically created a ptr and allocate memory,request memory in heap for one node.
	ptr->data = data;
	
	struct Node * p = head->next;
	while(p->next != head)
	{
		p = p->next;
		
	}
	//At this point p point s to last node of this cicular linked list.
	p->next = ptr;
	ptr->next = head;
	head = ptr;
	return head; 
}

int main()
{
	struct Node * head;
	struct Node * secand;
	struct Node * third;
	struct Node * fourth;
	
	//Allocate memory  for nodes in the linked list in heap
	head  = (struct Node*)malloc(sizeof(struct Node));
	secand  = (struct Node*)malloc(sizeof(struct Node));
	third  = (struct Node*)malloc(sizeof(struct Node));
	fourth  = (struct Node*)malloc(sizeof(struct Node));
	
	//Link first and secand Node
	head->data = 4;
	head->next = secand;
	//Link secand and third Node
	secand->data = 3;
	secand->next = third;
	//Link third and fourth Node
	third->data = 6;
	third->next = fourth;
	//Terminate the list at the fourth Node
	fourth->data = 1;
	fourth->next = head;
	
	printf("nOriginal Linked List\n");
	LinkedListTraversal(head);
	head = InsertAtFirst(head,80);
	
	printf("\nAfter Insertion\n");
	LinkedListTraversal(head);
	return 0;
}
