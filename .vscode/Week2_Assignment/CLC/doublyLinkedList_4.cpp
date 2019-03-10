// #include <iostream>

// using namespace std;

// /* Creating the node for the doubly linked list
//     has pointors set to next and previous node  */
// struct Node
// {
//     int data;
//     struct Node *next;
//     struct Node *prev;
//     struct Node *random;

//     // Contructor
//     Node(int data)
//     {
//         this->data = data;
//         // set next to random(null)
//         this->next = this->random = NULL;
//     }
// };

// /* Function to insert a node at the beginning
//    of the Doubly Linked List */
// void push(struct Node **head_ref, int new_data)
// {
//     /* allocate node */
//     struct Node *new_node =
//         (struct Node *)malloc(sizeof(struct Node));

//     /* put in the data  */
//     new_node->data = new_data;

//     /* since we are adding at the beginning,
//     prev is always NULL */
//     new_node->prev = NULL;

//     /* link the old list off the new node */
//     new_node->next = (*head_ref);

//     /* change prev of head node to new node */
//     if ((*head_ref) != NULL)
//         (*head_ref)->prev = new_node;

//     /* move the head to point to the new node */
//     (*head_ref) = new_node;
// }

// void makeCopy()

//     /* Function to print nodes in a given doubly
//    linked list */
//     void printList(struct Node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

// /* Driver program to test above functions*/
// int main()
// {
//     /* Start with the empty list */
//     struct Node *head = NULL;

//     /* Create the doubly linked list 10<->8<->4<->2<->5 */
//     push(&head, 5);
//     push(&head, 2);
//     push(&head, 4);
//     push(&head, 8);
//     push(&head, 10);

//     int n = 2;

//     cout << "\nDoubly linked list after deletion:n";
//     printList(head);

//     return 0;
// }

// https: //www.geeksforgeeks.org/clone-linked-list-next-arbit-pointer-set-2/