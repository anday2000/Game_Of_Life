#ifndef _POINT_H_
#define _POINT_H_

#include <stdio.h>
#include <stdlib.h>

#define SIZE 20
#define LIMIT (SIZE - 1)
#define MAX_NEIGHBORS 8
#define CLIPPED_NEIGHBORS 5

struct Point
{
    int row;
    int col;
} typedef Point;

Point create_point(int row, int col);
int check_point(Point p, int rows, int cols);
int live_neighbors(Point p, short field[SIZE][SIZE]);
//--------------For different game versions--------------
int clipped_live_neighbors(Point p, short field[SIZE][SIZE]); // For clipped version
int circular_live_neighbors(Point p, short field[SIZE][SIZE]); // For circular version
//-------------------------------------------------------
int alive_or_dead(Point p, short field[SIZE][SIZE]);    // alive - 1 dead - 0
int live_or_die(Point p, short field[SIZE][SIZE]);

#endif