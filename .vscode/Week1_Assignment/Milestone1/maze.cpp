#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Enter the dimensions of the maze (n,m) : ";
    cin >> n >> m; // input the dimensions of the maze

    int maze[n][m];
    // cout << "Input the maze :\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> maze[i][j]; // input the maze

    // print Maze
    cout << "\n\nMAZE : \n";
    for (int i = 0; i < n; i++)
    {
        // cout << ".";
        for (int j = 0; j < m; j++)
        { // checks for the correct character to print the maze
            if (maze[i][j] == 0)
                cout << "x";
            else if (maze[i][j] == 1)
                cout << "y";
            else if (maze[i][j] == 2)
                cout << "|.";
            else if (maze[i][j] == 3)
                cout << "S.";
            else
                cout << "F.";
        }
        cout << endl;
    }
    return 0;
}