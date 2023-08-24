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

struct Node * Insert_at_Begining(struct Node *head, int data)
{
	struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	
	ptr->next = head;
	
	return ptr;
}

struct Node * Insert_at_Index(struct Node *head, int data,int index)
{
	struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node * p = head;
	int i = 0;
	while(i!=index-1)
	{
		p = p->next;
		i++;
	}
	ptr->data = data;
	ptr->next = p->next;
	p->next = ptr;
	return head;
}

struct Node * Insert_at_End(struct Node *head, int data)
{
	struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	
	struct Node * p = head;
	while(p->next!=NULL)
	{
		p =p->next;
	}
	p->next = ptr;
	ptr->next = NULL;
	
	return head;
}


struct Node * Insert_After_Node(struct Node *head, struct Node *Prev_Node,  int data)
{
	struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	
	ptr->next = Prev_Node->next;
	Prev_Node->next = ptr;
	
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
	
	printf("Linked list before Insertion\n");
	LinkedListTraversal(head);
//	head = Insert_at_Begining(head,50);

//	Insert_at_Index(head,55,2);

//	Insert_at_End(head,60);
	
	head = Insert_After_Node(head,secand,45); 
	printf("\nLinked list After Insertion\n");
	LinkedListTraversal(head);
	return 0;
}
