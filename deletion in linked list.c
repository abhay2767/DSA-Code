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

//Case:1 deleting the first element from the linked list
struct Node *deleteFirst(struct Node * head)
{
	struct Node * ptr = head;
	head  = head->next;
	free(ptr);
	return head;
}

//Case:2 deleting at the given index in the linked list
struct Node *delete_At_Index(struct Node * head,int index)
{
	struct Node * p = head;
	struct Node * q = head->next;
	int i;
	for(i=0;i<index-1;i++)
	{
		p = p->next;
		q = q->next;
	}
	p->next = q->next;
	free(q);
	return head;
}

//Case:3 deleting at the last in linked list
struct Node *deleteLast(struct Node * head)
{
	struct Node * p = head;
	struct Node * q = head->next;
	while(q->next != NULL  )
	{
		p = p->next;
		q = q->next;
	}
	p->next = NULL;
	free(q);
	return head;
}

// Case 4: Deleting the element with a given value from the linked list
struct Node * deleteAtIndex(struct Node * head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
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
	third->data = 8;
	third->next = fourth;
	//Terminate the list at the fourth Node
	fourth->data = 1;
	fourth->next = NULL;
	
	printf("Linked List before deletion\n");
	LinkedListTraversal(head);
//	head = deleteFirst(head);

//	head = delete_At_Index(head,2);

//	head = deleteLast(head);

	head = deleteAtIndex(head,8);
	printf("Linked List After deletion\n");
	LinkedListTraversal(head);
	
	
	return 0;
}
