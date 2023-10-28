#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 11 // Adjust this value to change the size of the maze

char maze[SIZE][SIZE];

void generateMaze() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i % 2 == 0 || j % 2 == 0)
                maze[i][j] = '#';
            else
                maze[i][j] = ' ';
        }
    }

    srand(time(NULL));

    int startRow = rand() % (SIZE / 2) * 2 + 1;
    int startCol = rand() % (SIZE / 2) * 2 + 1;
    maze[startRow][startCol] = 'S';

    int endRow = rand() % (SIZE / 2) * 2 + 1;
    int endCol = rand() % (SIZE / 2) * 2 + 1;
    maze[endRow][endCol] = 'E';
}

void printMaze() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }
}

int main() {
    generateMaze();
    printMaze();
    return 0;
}
