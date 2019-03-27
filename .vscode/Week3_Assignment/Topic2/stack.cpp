#include <bits/stdc++.h>
using namespace std;

class editAction
{
    int top;

  public:
    //   creating array to hold our actions
    char actionsList[];

    // defining methods
    bool push(string x);
    int pop();
    bool isEmpty();
    int size();
};

bool editAction::push(string x)
{

    actionsList[++top] = x;
    cout << x << " pushed into actions stack\n";
    return true;
}

int editAction::pop()
{
    if (top < 0)
    {
        cout << "actions list is empty";
        return 0;
    }
    else
    {
        int x = actions[top--];
        return x;
    }
}

bool editAction::isEmpty()
{
    return (top < 0);
}

// Driver
int main()
{
    class editAction list;
    list.push(10);
    list.push(20);
    list.push(30);
    cout << list.pop() << " Popped from action list\n";

    return 0;
}