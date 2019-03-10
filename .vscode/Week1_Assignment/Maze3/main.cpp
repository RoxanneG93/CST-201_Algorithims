#include <iostream>
#include <fstream>

using namespace std;

// class Cell
// {

//     // coordinates
//     int x, y;

// }

// class myMaze
// {

//     // boolean loadMaze(String inputFile){

//     // }
// }

int main()
{

    // open input file
    std::ifstream in_file;
    in_file.open("input_file.txt");
    int Maze_Dimensions;
    // make sure file is open
    if (!in_file)
    {
        std::cerr << "file open error" << std::endl;
        return 1;
    }

    in_file >> Maze_Dimensions;

    std::cout << Maze_Dimensions << std::endl;

    // // width and height of the maze dimensions
    // int X_width, y_height;

    // // dimenstion of the maze grid?
    // int gridX, gridY;

    // char[][] grid;

    // int cell[][];

    // while (!in_file.eof())
    // {
    // std:
    //     getline(in_file, line);
    //     cout << line << std::endl;
    // }

    // int n, m;
    // cout << "Enter the dimensions of the maze (n,m) : ";
    // cin >> n >> m; // input the dimensions of the maze
    // int maze[n][m];
    // cout << "Input the maze :\n";
    // for (int i = 0; i < n; i++)
    //     for (int j = 0; j < m; j++)
    //         cin >> maze[i][j]; // input the maze
    // // print function

    // cout << "\n\nMAZE : \n";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << ".";
    //     for (int j = 0; j < m; j++)
    //     { // checks for the correct character to print the maze
    //         if (maze[i][j] == 0)
    //             cout << " .";
    //         else if (maze[i][j] == 1)
    //             cout << "-.";
    //         else if (maze[i][j] == 2)
    //             cout << "|.";
    //         else if (maze[i][j] == 3)
    //             cout << "S.";
    //         else
    //             cout << "E.";
    //     }
    //     cout << endl;
    // }
    return 0;
}