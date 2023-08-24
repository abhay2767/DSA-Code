#include<stdio.h>
#include<stdlib.h>



struct Node
{
	int data;
	struct Node * next;
};


void LinkedListTraversal(struct Node* ptr)
{
	while(ptr!=NULL)
	{
		printf("Element: %d\n",ptr->data);
		ptr = ptr->next;
	}
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
	head->data = 7;
	head->next = secand;
	//Link secand and third Node
	secand->data = 11;
	secand->next = third;
	//Link third and fourth Node
	third->data = 15;
	third->next = fourth;
	//Terminate the list at the fourth Node
	fourth->data = 20;
	fourth->next = NULL;
	
	
	LinkedListTraversal(head);
	
	return 0;
}
