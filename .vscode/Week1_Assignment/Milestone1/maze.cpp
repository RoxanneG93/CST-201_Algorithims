#include <iostream>
#include <fstream>

// what do these do???
#include <sstream>
#include <string>
#include <stdio.h>
#include <string.h>

using namespace std;

class Maze
{
};

int main()
{

    // create array to hold input file
    string grid[12];
    string line;
    int i = 0;

    // this needs more work
    // // open the file
    // ifstream file("inputFile.txt");
    // // cout << input << endl;
    // if (file.is_open())
    // {
    //     // eof checks for end of file has been reached
    //     // loop while end of file is not reached
    //     while (!file.eof())
    //     {
    //         // each line in txt file is set to string line
    //         getline(file, line);
    //         // set each index in grid array to line
    //         grid[i] = line;
    //         i++;
    //     }
    // }
    // file.close();

    // Creating the file for output
    ofstream outputFile;
    outputFile.open("outputFile.txt");

    int height = 11;
    int width = 10;

    string path = ".";
    string start = "S";
    string goal = "F";
    string wall = "x";

    string maze[11][10] = {
        {"S", ".", ".", ".", "x", ".", ".", ".", ".", "."},
        {".", "x", "x", "x", ".", ".", "x", "x", "x", "."},
        {".", "x", ".", "x", ".", "x", ".", "x", ".", "."},
        {".", ".", ".", "x", ".", "x", ".", "x", ".", "x"},
        {".", "x", ".", "x", ".", "x", ".", ".", ".", "."},
        {".", ".", ".", ".", ".", "x", ".", ".", "x", "."},
        {"x", ".", ".", ".", "x", ".", ".", "x", "x", "."},
        {"x", "x", "x", "x", ".", "x", ".", ".", ".", "x"},
        {".", ".", "x", ".", ".", ".", "x", ".", "x", "."},
        {"x", ".", ".", ".", "x", ".", "x", ".", ".", "."},
        {".", ".", ".", "F", "x", ".", ".", ".", "x", "."},
    };

    // Iterates through the rows of the hard coded maze
    for (int i = 0; i < height; i++)
    {

        // run the first time to create numbers
        if (i == 0)
        {
            outputFile << "   ";
            for (int j = 0; j < width; j++)
            {
                outputFile << " " << j << " ";
            }
            outputFile << endl;
            outputFile << "   ";
            for (int j = 0; j < width; j++)
            {
                outputFile << "_"
                           << "_"
                           << "_";
            }
            outputFile << endl;
        }

        // run 3 times to create 3x3 block
        for (int h = 0; h < 3; h++)
        {

            // is 1st row in block
            if (h == 1 && i < 10)
            {
                outputFile << i << " |";
            }
            // is 2nd row in block
            else if (h == 1 && i >= 10)
            {
                outputFile << i << "|";
            }
            // is 3rd row in block
            else
            {
                outputFile << "  |";
            }

            for (int j = 0; j < width; j++)
            {
                // run 3 times for 3x3 block
                for (int k = 0; k < 3; k++)
                {
                    if (k != 1)
                    {
                        if (maze[i][j] == start)
                        {
                            outputFile << ".";
                        }
                        else if (maze[i][j] == goal)
                        {
                            outputFile << ".";
                        }
                        else if (maze[i][j] == wall)
                        {
                            outputFile << "x";
                        }
                        else if (maze[i][j] == path)
                        {
                            outputFile << ".";
                        }
                    }
                    else
                    {
                        if (maze[i][j] == start)
                        {
                            if (h == 1)
                            {
                                outputFile << "S";
                            }
                            else
                            {
                                outputFile << ".";
                            }
                        }
                        else if (maze[i][j] == goal)
                        {
                            if (h == 1)
                            {
                                outputFile << "F";
                            }
                            else
                            {
                                outputFile << ".";
                            }
                        }
                        else if (maze[i][j] == wall)
                        {
                            outputFile << "x";
                        }
                        else if (maze[i][j] == path)
                        {
                            outputFile << ".";
                        }
                    }
                }
            }
            outputFile << endl;
        }
    }
    outputFile.close();
    return 0;
}