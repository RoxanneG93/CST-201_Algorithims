#include <iostream>

int main()
{

    // making the node object with it's data and next pointer
    struct Node
    {
        int data;
        Node *next;
    };

    class list
    {
        // setting pointers of head and tail.
        Node *head, *tail;

      public:
        list()
        {
            // mading null to avoid any garbage value
            head = NULL;
            tail = NULL;
        }

        void createnode(int value)
        {
            // create new node and setting pointer to variable temp
            Node *temp = new Node;

            // setting temp.data to value
            temp->data = value;
            // setting temp.next to null
            temp->next = NULL;

            // if there is no value in head, (meaning the list is empty) set the value
            // as both head and tail
            if (head == NULL)
            {
                head = temp;
                tail = temp;
                temp = NULL;
            }
            else
            {
                tail->next = temp;
                tail = temp;
            }
        }
    };

    int p = 10;
}
