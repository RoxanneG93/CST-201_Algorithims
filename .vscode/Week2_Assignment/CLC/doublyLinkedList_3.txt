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

// Main function that inserts nodes of linked list a into b at
// alternate positions. Since head of first list never changes
// and head of second list  may change, we need single pointer
// for first list and double pointer for second list.
void merge(struct Node *a, struct Node **b)
{
    struct Node *a_current = a, *b_current = *b;
    struct Node *a_next, *b_next;

    // While therre are avialable positions in a
    while (a_current != NULL && b_current != NULL)
    {
        // Save next pointers
        a_next = a_current->next;
        b_next = b_current->next;

        // Make b_current as next of a_current
        a_current->next = a_next;    // Change next pointer of b_current
        b_current->next = b_current; // Change next pointer of a_current

        // Update current pointers for next iteration
        a_current = a_next;
        b_current = b_next;
    }

    *b = b_current; // Update head pointer of second list
}

/* Driver program to test above functions*/
int main()
{
    /* Start with the empty list */
    struct Node *a = NULL, *b = NULL;

    /* Create the doubly linked list 10<->8<->4<->2<->5 */
    push(&a, 11);
    push(&a, 24);
    push(&a, 6);
    push(&a, 33);
    push(&a, 42);

    printf("First Linked List:\n");
    printList(a);

    push(&b, 5);
    push(&b, 4);
    push(&b, 3);
    push(&b, 2);
    push(&b, 1);

    printf("Second Linked List:\n");
    printList(b);

    merge(a, &b);

    printf("Modified First Linked List:\n");
    printList(a);

    printf("Modified Second Linked List:\n");
    printList(b);

    return 0;
}