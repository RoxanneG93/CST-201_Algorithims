#include <iostream>

using namespace std;

/* Creating the node for the doubly linked list
    has pointors set to next and previous node  */
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

/* Function to delete a node in a Doubly Linked List. 
   head_ref --> pointer to head node pointer. 
   del  -->  pointer to node to be deleted. */
void deleteNode(struct Node **head_ref, struct Node *del_node)
{
    /* base case */
    if (*head_ref == NULL || del_node == NULL)
        return;

    /* If node to be deleted is head node */
    if (*head_ref == del_node)
        // set head to next node
        *head_ref = del_node->next;

    /* Change next only if node to be deleted is NOT  
       the last node */
    if (del_node->next != NULL)
        del_node->next->prev = del_node->prev;

    /* Change prev only if node to be deleted is NOT  
       the first node */
    if (del_node->prev != NULL)
        del_node->prev->next = del_node->next;

    /* Last Step, free the memory occupied by del*/
    free(del_node);
}

/* Function to delete the node at the given position 
   in the doubly linked list */
void deleteNodeAtNthPos(struct Node **head_ref, int n)
{
    /* if list in NULL or invalid position is given */
    if (*head_ref == NULL || n <= 0)
        return;

    struct Node *current = *head_ref;
    int i;

    /* traverse up to the node at position 'n' from 
       the beginning */
    for (int i = 1; current != NULL && i < n; i++)
        current = current->next;

    /* if 'n' is greater than the number of nodes 
       in the doubly linked list */
    if (current == NULL)
        return;

    /* delete the node pointed to by 'current' */
    deleteNode(head_ref, current);
}

/* Function to insert a node at the beginning  
   of the Doubly Linked List */
void push(struct Node **head_ref, int new_data)
{
    /* allocate node */
    struct Node *new_node =
        (struct Node *)malloc(sizeof(struct Node));

    /* put in the data  */
    new_node->data = new_data;

    /* since we are adding at the beginning, 
    prev is always NULL */
    new_node->prev = NULL;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* change prev of head node to new node */
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Function to print nodes in a given doubly 
   linked list */
void printList(struct Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

/* Driver program to test above functions*/
int main()
{
    /* Start with the empty list */
    struct Node *head = NULL;

    /* Create the doubly linked list 10<->8<->4<->2<->5 */
    push(&head, 5);
    push(&head, 2);
    push(&head, 4);
    push(&head, 8);
    push(&head, 10);

    cout << "Doubly linked list before deletion: ";
    printList(head);

    int n = 3;

    /* delete node at the given position 'n' */
    deleteNodeAtNthPos(&head, n);

    cout << "\nDoubly linked list after deletion: ";
    printList(head);

    return 0;
}