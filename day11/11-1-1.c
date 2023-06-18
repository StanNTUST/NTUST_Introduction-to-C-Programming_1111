#include <stdio.h>
#define turnright dir + 1 > 3 ? 0 : dir + 1
#define turnleft dir - 1 < 0 ? 3 : dir - 1

const int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int isfinish = 0;

void mazeprint(char maze[][12]) {
    for (int x = 0; x < 12; x++) {
        for (int y = 0; y < 12; y++)
            printf("%c", maze[x][y]);
        puts("");
    }
    puts("");
}

void mazeset(char maze[][12]) {
    for (int x = 0; x < 12; x++)
        for (int y = 0; y < 12; y++)
            scanf(" %c", &maze[x][y]);
}

void mazetraverse(char maze[][12], int x, int y, int dir) {
    /* no recursive situation */
    if (isfinish) return;                            // reach goal
    if (x < 0 || x > 11 || y < 0 || y > 11) return;  // out of bound
    if (maze[x][y] == '#') return;                   // wall
    if (maze[x][y] == 'X') return;                   // walked
    /* recursive (right -> front -> left) */
    maze[x][y] = 'X';  // walk
    mazeprint(maze);   // print map
    if (y == 11) {     // if reach goal
        isfinish = 1;
        return;
    }
    mazetraverse(maze, x + directions[turnright][0], y + directions[turnright][1], turnright);
    mazetraverse(maze, x + directions[dir][0], y + directions[dir][1], dir);
    mazetraverse(maze, x + directions[turnleft][0], y + directions[turnleft][1], turnleft);
}

int main(void) {
    char maze[12][12];
    mazeset(maze);
    mazetraverse(maze, 2, 0, 0);
    return 0;
}
