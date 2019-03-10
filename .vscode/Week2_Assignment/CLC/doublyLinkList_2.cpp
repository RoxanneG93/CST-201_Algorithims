#include <iostream>

// Create linked list node
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

/* Given a reference (pointer to pointer) to the head of a list 
   and an int, inserts a new node on the front of the list. */
void push(struct Node **head_ref, int new_data)
{
    // Create new Node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    // set new node's data with new_data
    new_node->data = new_data;

    // Make next of new node as head and previous as NULL
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    // If list is not empty, change prev of head node to new node
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    // move the head to point to the new node
    (*head_ref) = new_node;
}

// Takes in node as prev_node, insert a new node after the given node
void insertAfter(struct Node *prev_node, int new_data)
{
    // check if the given prev_node is NULL
    if (prev_node == NULL)
    {
        printf("the given previous node cannot be NULL");
        return;
    }

    // Create new node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    // set new node with new_data
    new_node->data = new_data;
    // Make the next of new_node into next of prev_node
    new_node->next = prev_node->next;
    // make the next of prev_node as new_node
    prev_node->next = new_node;
    // Make prev_node as previous of new_node
    new_node->prev = prev_node;
    // Change previous of new_node's next node
    if (new_node->next != NULL)
        new_node->next->prev = new_node;
}

// This function prints contents of linked list starting from the given node
// Also prints in Reverse
void printList(struct Node *node)
{
    struct Node *last;
    printf("\nTraversal in forward direction \n");
    while (node != NULL)
    {
        printf(" %d ", node->data);
        last = node;
        node = node->next;
    }

    printf("\nTraversal in reverse direction \n");
    while (last != NULL)
    {
        printf(" %d ", last->data);
        last = last->prev;
    }
}

// Main to test above functions
int main()
{
    // Start with the empty list
    struct Node *head = NULL;

    // append(&head, 16);
    push(&head, 16);
    push(&head, 15);
    push(&head, 13);
    push(&head, 12);

    printf("Created List: ");
    printList(head);

    // Insert 14, after 13. So linked list becomes 12->13->14->15->16->NULL
    insertAfter(head->next, 14);

    printf("\nCreated List is now: ");
    printList(head);

    return 0;
}