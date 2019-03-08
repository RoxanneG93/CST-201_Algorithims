// #include <stdio.h>

// #include <stdlib.h>

// int main(int argc, char **argv, char **envp)
// {

//     typedef struct Maze
//     {

//         int iCols, iRows;

//         char **ppRows;

//     } MAZE;

//     struct Maze maze;

//     char cCols[maze.iCols];

//     char *cRows[maze.iRows];

//     maze.ppRows = cRows;

//     MAZE *pMAZE;

//     pMAZE = malloc(sizeof(MAZE));

//     pMAZE->ppRows = (char **)malloc(sizeof(char));

//     FILE *pf;

//     pf = fopen(argv[1], "r");

//     fscanf(pf, "%i %*c %i", &maze.iCols, &maze.iRows);

//     printf("iCols = %d and iRows = %d\n", maze.iCols, maze.iRows);
// }
