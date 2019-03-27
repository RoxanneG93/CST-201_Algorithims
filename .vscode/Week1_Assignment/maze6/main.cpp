#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    // Create array to hold input file
    string txt[12];
    string line;

    int i = 0;
    ifstream file("input_file.txt"); // Get file
    if (file.is_open())
    {
        while (!file.eof())
        {
            getline(file, line);
            txt[i] = line; // For each line in file add to text array
            i++;
        }
    }
    file.close();

    // Create file for output
    ofstream myfile;
    myfile.open("output_file.txt");

    // Create height and width
    int height = 11;
    int width = 10;

    // Create string for different blocks
    string open = ".";
    string start = "s";
    string free = "f";
    string wall = "x";

    // Create array of maze
    string blockArray[11][10] = {
        {"s", ".", ".", ".", "x", ".", ".", ".", ".", "."},
        {".", "x", "x", "x", ".", ".", "x", "x", "x", "."},
        {".", "x", ".", "x", ".", "x", ".", "x", ".", "."},
        {".", ".", ".", "x", ".", "x", ".", "x", ".", "x"},
        {".", "x", ".", "x", ".", "x", ".", ".", ".", "."},
        {".", ".", ".", ".", ".", "x", ".", ".", "x", "."},
        {"x", ".", ".", ".", "x", ".", ".", "x", "x", "."},
        {"x", "x", "x", "x", ".", "x", ".", ".", ".", "x"},
        {".", ".", "x", ".", ".", ".", "x", ".", "x", "."},
        {"x", ".", ".", ".", "x", ".", "x", ".", ".", "."},
        {".", ".", ".", "f", "x", ".", ".", ".", "x", "."},
    };

    // Iterates through the rows of the blockArray
    for (int i = 0; i < height; i++)
    {

        // run the first time to create numbers
        if (i == 0)
        {
            myfile << "   ";
            for (int j = 0; j < width; j++)
            {
                myfile << " " << j << " ";
            }
            myfile << endl;
            myfile << "   ";
            for (int j = 0; j < width; j++)
            {
                myfile << "_"
                       << "_"
                       << "_";
            }
            myfile << endl;
        }

        // run 3 times to create 3x3 block
        for (int h = 0; h < 3; h++)
        {

            // is 1st row in block
            if (h == 1 && i < 10)
            {
                myfile << i << " |";
            }
            // is 2nd row in block
            else if (h == 1 && i >= 10)
            {
                myfile << i << "|";
            }
            // is 3rd row in block
            else
            {
                myfile << "  |";
            }

            for (int j = 0; j < width; j++)
            {
                // run 3 times for 3x3 block
                for (int k = 0; k < 3; k++)
                {
                    if (k != 1)
                    {
                        if (blockArray[i][j] == start)
                        {
                            myfile << ".";
                        }
                        else if (blockArray[i][j] == free)
                        {
                            myfile << ".";
                        }
                        else if (blockArray[i][j] == wall)
                        {
                            myfile << "x";
                        }
                        else if (blockArray[i][j] == open)
                        {
                            myfile << ".";
                        }
                    }
                    else
                    {
                        if (blockArray[i][j] == start)
                        {
                            if (h == 1)
                            {
                                myfile << "s";
                            }
                            else
                            {
                                myfile << ".";
                            }
                        }
                        else if (blockArray[i][j] == free)
                        {
                            if (h == 1)
                            {
                                myfile << "f";
                            }
                            else
                            {
                                myfile << ".";
                            }
                        }
                        else if (blockArray[i][j] == wall)
                        {
                            myfile << "x";
                        }
                        else if (blockArray[i][j] == open)
                        {
                            myfile << ".";
                        }
                    }
                }
            }
            myfile << endl;
        }
    }
    // write maze to file
    myfile.close();

    return 0;
}