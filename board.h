#ifndef BOARD_H
#define BOARD_H
#include <cstdlib>
#include <string>
using namespace std;

class board
{
public:
    string kolor;
    board();
    board(const board& wzor);
    ~board();
    void zapalona(int g);
private:
    int zapalona2(int g);
};

#endif // BOARD_H
