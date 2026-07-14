#include <cmath>

enum enPrimeNotPrime
{
    Prime = 1,
    NotPrime = 2
};

enPrimeNotPrime checkPrime(int number)
{
    if (number < 2)
        return NotPrime;

    int limit = static_cast<int>(sqrt(number));

    for (int counter = 2; counter <= limit; counter++)
    {
        if (number % counter == 0)
            return NotPrime;
    }

    return Prime;
}