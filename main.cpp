#include <iostream>
#include "default.h"
#include "implementation/implementation.h"

using std::cout;
using std::endl;

char array[SIZE][SIZE] = {
        {SPACE, SPACE, SPACE},
        {SPACE, SPACE, SPACE},
        {SPACE, SPACE, SPACE}
};

void game(Player &player1, Player &player2)
{
    char done = SPACE;
    do
    {
        print_array();
        player1.execute(player1.x);
        done = check();
        if (done != SPACE)
            break;
        print_array();
        player2.execute(player2.o);
        done = check();
    } while (done == SPACE);
    if (done == 'X')
        printf("X won!\n");
    else
        printf("O won!\n");
    print_array();
}

int main()
{
    int choice;
    std::cout << "TIC-TAC-TOE" << std::endl;
    Human human {};
    Human human1 {};
    AI_random aiRandom {};
//    AI_random aiRandom1 {};
    AI_step aiStep {};
//    AI_step aiStep1 {};

    choice = game_mode();
    switch (choice) {
        case 0:
            printf("Thanks Bye!\n");
            break;
        case 1:
            game(human, human1);
            break;
        case 2:
            game(human, aiRandom);
            break;
        case 3:
            game(human, aiStep);
        default:
            printf("Please select option from 1 tp 3\n");
    }

    return 0;
}
