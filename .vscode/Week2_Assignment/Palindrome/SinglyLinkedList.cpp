#include <stdio.h>
#include <stdlib.h>

// Data Structure to store a linked list node
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new Node with the given data and
// pushes it onto the front of the list
void push(struct Node **head, int data)
{
    // create a new node from heap
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

// Recursive function to check if linked list is palindrome or not
// This function checks each list comparing each node from "left" and "right"
int isPalindrome(struct Node **left, struct Node *right)
{
    // if one list is empty or null, return
    if (right == NULL)
        return 1;

    int res = isPalindrome(left, right->next) &&
              ((*left)->data == right->data);
    (*left) = (*left)->next;

    return res;
}

// Function to check if linked list is palindrome or not
// A Wrapper function that takes in the list give in main and seperates into two lists for left and right
int isPalin(struct Node *head)
{
    return isPalindrome(&head, head);
}

// main method
int main(void)
{
    // input keys
    int list[] = {1, 3, 5, 3, 1};
    int n = sizeof(list) / sizeof(list[0]);

    struct Node *head = NULL;
    for (int i = n - 1; i >= 0; i--)
        push(&head, list[i]);

    if (isPalin(head))
        printf("Linked list is Palindrome");
    else
        printf("Linked list is not Palindrome");

    return 0;
}