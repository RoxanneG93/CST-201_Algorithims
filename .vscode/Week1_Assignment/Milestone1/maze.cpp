#include <iostream>
#include <fstream>

using namespace std;

class Maze
{

    // constructor needed?
    // int width;
    // int height;
    // int mazeArea = width * height;

    // size of the maze x, y
    char maze[10][11];

    // coordinates of the maze

    // Maze methods
  public:
    void ReadMaze();
};

// Reading maze from file name
void Maze::ReadMaze()
{

    // Read coordinates from inputFile
    std::ifstream input("inputFile.txt");

    for (std::string line; getline(input, line);)
    {
        cout << line;
    }

    // int x, y;
    // input >> x >> y;
    // cout << "test: " << input;

    // string test;
    // if (inputFile.is_open())
    // {
    //     while (getline(inputFile, test))
    //     {
    //         cout << test << "\n";
    //     }
    // }

    // for(int x = 0; x < 10; x++){
    //     for(int y = 0; y< 11; y++){
    //         // inputFile >> maze;
    //         cout << x
    //     }
    // }

    // inputFile >> num_rows >> num_cols;

    // inputFile >> start_row >> start_col;

    // inputFile >> end_row >> end_col;

    // Read maze.txt body
    // string line;

    // getline(inputFile, line);

    // for (int r = 0; r < num_rows; r++)
    // {

    //     getline(inputFile, line);

    //     for (int c = 0; c < num_cols; c++)

    //         if (c < int(line.length()))

    //             maze[r][c] = line[c];
    // }

    // inputFile.close();
}

int main()
{

    Maze m;

    int r, c;

    m.ReadMaze();

    // cin >> n >> m; // input the dimensions of the maze

    // int maze[n][m];
    // cout << "Input the maze :\n";
    // for (int i = 0; i < n; i++)
    //     for (int j = 0; j < m; j++)
    //         cin >> maze[i][j]; // input the maze

    // print Maze
    // cout << "\n\nMAZE : \n";
    // for (int i = 0; i < n; i++)
    // {
    //     // cout << ".";
    //     for (int j = 0; j < m; j++)
    //     { // checks for the correct character to print the maze
    //         if (maze[i][j] == 0)
    //             cout << "x";
    //         else if (maze[i][j] == 1)
    //             cout << "y";
    //         else if (maze[i][j] == 2)
    //             cout << "|.";
    //         else if (maze[i][j] == 3)
    //             cout << "S.";
    //         else
    //             cout << "F.";
    //     }
    //     cout << endl;
    // }
    return 0;
}