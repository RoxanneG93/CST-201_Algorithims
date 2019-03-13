// #include <iostream>
// #include <stack>

// using namespace std;

// // #include "olcConsoleGameEngine.h";

// class Maze
// {
//   public:
//     // constructor to initialize the maze size
//     Maze()
//     {
//         int width = 40;
//         int height = 25;
//         int *maze;

//         // setting area of the maze
//         maze = new int[width * height];

//         // memset the starting values of maze
//         memset(maze, 0x00, width * height);

//         // push in the starting pair of coordinates
//         mazeStack.push(make_pair(0, 0));
//     }

//     // A class that defines constants of the cells
//     enum
//     {
//         cell_path_N = 0x01,
//         cell_path_E = 0X02,
//         cell_path_S = 0X04,
//         cell_path_W = 0x08,
//         cell_VISITED = 0x10,

//     };

//     int visitedCells;

//     // stack with type of pair will allow us to store multiple int (x, y)
//     stack<pair<int, int>> mazeStack;

//     maze[0] = cell_VISITED;

//     visitedCells = 1;

//     // iterate through each of the cells and print to console
//     for (int x = 0; x < width; x++)
//     {
//         for (int y = 0; y < height; y++)
//         {
//             if (maze[y * width + x] & cell_VISITED)
//             {
//                 cout << "S" << endl;
//             }
//         }
//     }
// };

// int main()
// {

//     return 0;
// }