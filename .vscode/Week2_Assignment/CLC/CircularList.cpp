
#include<stdio.h> 
#include<stdlib.h> 

struct Node
{
	int data;
	struct Node *next;
};

void push(struct Node **head_ref, int data)
{
	// Create a new node and make head as next 
	// of it. 
	struct Node *ptr1 =
		(struct Node *)malloc(sizeof(struct Node));
	ptr1->data = data;
	ptr1->next = *head_ref;

	/* If linked list is not NULL then set the
	   next of last node */
	if (*head_ref != NULL)
	{
		// Find the node before head and update 
		// next of it. 
		struct Node *temp = *head_ref;
		while (temp->next != *head_ref)
			temp = temp->next;
		temp->next = ptr1;
	}
	else
		ptr1->next = ptr1; /*For the first node */

	*head_ref = ptr1;
}

void printList(struct Node *head)
{
	struct Node *temp = head;
	if (head != NULL)
	{
		do
		{
			printf("%d ", temp->data);
			temp = temp->next;
		} while (temp != head);
	}

	printf("\n");
}

/* Function to delete a given node from the list */
void deleteNode(struct Node *head, int key)
{
	if (head == NULL)
		return;

	struct Node *curr = head, *prev;
	while (curr->data != key)
	{
		if (curr->next == head)
		{
			printf("\nGiven node is not found"
				" in the list!!!");
			break;
		}

		prev = curr;
		curr = curr->next;
	}

	// Check if node is only node 
	if (curr->next == head)
	{
		head = NULL;
		free(curr);
		return;
	}

	// If more than one node, check if 
	// it is first node 
	if (curr == head)
	{
		prev = head;
		while (prev->next != head)
			prev = prev->next;
		head = curr->next;
		prev->next = head;
		free(curr);
	}

	// check if node is last node 
	else if (curr->next == head)
	{
		prev->next = head;
		free(curr);
	}
	else
	{
		prev->next = curr->next;
		free(curr);
	}

}
void insertAfter(struct Node* prev_node, int new_data)
{
	/*1. check if the given prev_node is NULL */
	if (prev_node == NULL)
	{
		printf("the given previous node cannot be NULL");
		return;
	}

	/* 2. allocate new node */
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

	/* 3. put in the data  */
	new_node->data = new_data;

	/* 4. Make next of new node as next of prev_node */
	new_node->next = prev_node->next;

	/* 5. move the next of prev_node as new_node */
	prev_node->next = new_node;
}

/* Function to reverse the linked list */
void reverse(Node** head_ref)
{
	// if list is empty 
	if (*head_ref == NULL)
		return;

	// reverse procedure same as reversing a 
	// singly linked list 
	Node* prev = NULL;
	Node* current = *head_ref;
	Node* next;
	do {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	} while (current != (*head_ref));

	// adjutsing the links so as to make the 
	// last node point to the first node 
	(*head_ref)->next = prev;
	*head_ref = prev;
}

/* Driver program to test above functions */
int main()
{
	/* Initialize lists as empty */
	struct Node *head = NULL;

	/* Created linked list will be 1->2->3->4->5 */
	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);
	push(&head, 5);

	printf("Default List: ");
	printList(head);

	deleteNode(head, 3);

	printf("Deleted List: ");
	printList(head);

	insertAfter(head->next, 3);

	printf("Appended List: ");
	printList(head);

	reverse(&head);

	printf("Reversed List: ");
	printList(head);

	return 0;
}
