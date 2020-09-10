//
// Created by olehn on 09.09.20.
//
#include "default.h"
#include "iostream"

using std::cin;

int game_mode()
{
    int choice;

    printf("Select game mode\n");
    printf("1. Human vs Human\n");
    printf("2. Human vs AI #1\n");
    printf("3. Human vs AI #2\n");
    printf("0. Exit\n");
    printf("Select: ");

    cin >> choice;

    return choice;
}

void print_array()
{
    int i;
    int j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("%c ", array[i][j]);
            if (j != SIZE - 1)
            {
                printf("| ");
            }
        }
        putchar('\n');
    }
    putchar('\n');
}

char check()
{
    int i;
    char *p;
    for (i = 0; i < SIZE; i++)
    { /* check row */
        p = &array[i][0];
        if (*p == *(p + 1) && *(p + 1) == *(p + 2))
            return *p;
    }
    for (i = 0; i < SIZE; i++)
    { /* check column*/
        p = &array[0][i];
        if (*p == *(p + 3) && *(p + 3) == *(p + 6))
            return *p;
    }

    /* check diagonals */
    if (array[0][0] == array[1][1] && array[1][1] == array[2][2])
        return array[0][0];
    if (array[0][2] == array[1][1] && array[1][1] == array[2][0])
        return array[0][2];
    return SPACE;
}