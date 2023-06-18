#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define turnRight dir + 1 > 3 ? 0 : dir + 1
#define turnLeft dir - 1 < 0 ? 3 : dir - 1
#define offset(dirName, number) (dirName + number) % 4

const int Directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int isFinish = 0;

void mazePrint(char maze[][12]) {
    for (int x = 0; x < 12; x++) {
        for (int y = 0; y < 12; y++)
            printf("%c", maze[x][y]);
        puts("");
    }
    puts("");
}

void mazeTraverse(char maze[][12], int x, int y, int dir) {
    if (isFinish) return;
    if (x < 0 || x > 11 || y < 0 || y > 11) return;
    if (maze[x][y] == '#') return;
    if (maze[x][y] == 'X') return;
    maze[x][y] = 'X';
    for (int x = 0; x < 12; x++) {
        for (int y = 0; y < 12; y++)
            printf("%c", maze[x][y]);
        puts("");
    }
    puts("");
    if (y == 11) {
        isFinish = 1;
        return;
    }
    mazeTraverse(maze, x + Directions[turnRight][0], y + Directions[turnRight][1], turnRight);
    mazeTraverse(maze, x + Directions[dir][0], y + Directions[dir][1], dir);
    mazeTraverse(maze, x + Directions[turnLeft][0], y + Directions[turnLeft][1], turnLeft);
}

void mazeInit(char maze[][12], int Exit) {
    for (int x = 0; x < 12; x++)
        for (int y = 0; y < 12; y++)
            maze[x][y] = (x == 0 || x == 11 || y == 0 || y == 11) ? '#' : '@';
    maze[Exit][10] = maze[Exit][11] = '.';
}

void mazeGenerator(char maze[][12], int x, int y, int dir) {
    if (x < 1 || x > 10 || y < 1 || y > 10) return;
    if (maze[x][y] != '@') return;
    //
    maze[x + Directions[offset(dir, 2)][0]][y + Directions[offset(dir, 2)][1]] = '.';
    maze[x][y] = '.';
    //
    int nextDir = rand() % 4;
    mazeGenerator(maze, x + Directions[offset(nextDir, 0)][0] * 2, y + Directions[offset(nextDir, 0)][1] * 2, offset(nextDir, 0));
    mazeGenerator(maze, x + Directions[offset(nextDir, 1)][0] * 2, y + Directions[offset(nextDir, 1)][1] * 2, offset(nextDir, 1));
    mazeGenerator(maze, x + Directions[offset(nextDir, 2)][0] * 2, y + Directions[offset(nextDir, 2)][1] * 2, offset(nextDir, 2));
    mazeGenerator(maze, x + Directions[offset(nextDir, 3)][0] * 2, y + Directions[offset(nextDir, 3)][1] * 2, offset(nextDir, 3));
}

void wallSet(char maze[][12]) {
    for (int x = 0; x < 12; x++)
        for (int y = 0; y < 12; y++)
            if (maze[x][y] == '@') maze[x][y] = '#';
    mazePrint(maze);
}

int main(void) {
    srand(time(NULL));
    char maze[12][12];
    int Entry = rand() % 10 + 2, Exit = rand() % 10 + 2;
    if (Entry % 2 == 1) Entry -= 1;
    if (Exit % 2 == 1) Exit -= 1;
    mazeInit(maze, Exit);
    mazeGenerator(maze, Entry, 1, 0);
    wallSet(maze);
    mazeTraverse(maze, Entry, 0, 0);
    return 0;
}
