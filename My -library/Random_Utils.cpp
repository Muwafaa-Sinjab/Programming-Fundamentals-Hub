#include <cstdlib>
#include <ctime>

void initializeRandomGenerator()
{
    srand(static_cast<unsigned>(time(nullptr)));
}

int randomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}