//
// Created by olehn on 09.09.20.
//

#include "implementation.h"
#include "../default.h"
#include <iostream>
#include <random>

using std::cin;

void Human::execute(const char sym)
{
    int row, column;
    printf("Enter Row and Column via SPACE: ");
    cin >> row >> column;

    if ((row < 0) || (row > SIZE - 1) || (column < 0) || (column > SIZE - 1) || (array[row][column] != SPACE))
    {
        printf("Please select row and column in 0 to %d diapason\n", SIZE - 1);
        execute(sym);
    } else
    {
        array[row][column] = sym;
    }
}

void AI_random::execute(const char sym)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> row(0, SIZE);
    std::uniform_real_distribution<double> column(0, SIZE);

    if (array[(int)row(mt)][(int)column(mt)] != SPACE)
    {
        execute(sym);
    } else
    {
        array[(int)row(mt)][(int)column(mt)] = sym;
    }
}

void AI_step::execute(const char sym)
{
    int row;
    int column;
    for (row = 0; row < SIZE; row++)
    {
        for (column = 0; column < SIZE; column++)
        {
            if (array[row][column] == SPACE)
            {
                array[row][column] = sym;
                return;
            } else
            {
                continue;
            }
        }
    }
}