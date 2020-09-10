//
// Created by olehn on 09.09.20.
//

#ifndef TIC_TAC_TOE_IMPLEMENTATION_H
#define TIC_TAC_TOE_IMPLEMENTATION_H

class Player {
public:
    const char x = 'X';
    const char o = 'O';

    virtual void execute(char sym) = 0;
};

class Human : public Player
{
public:
    void execute(char sym) override;
};

class AI_random : public Player
{
public:
    void execute(char sym) override;
};

class AI_step : public Player
{
public:
    void execute(char sym) override;
};

#endif //TIC_TAC_TOE_IMPLEMENTATION_H