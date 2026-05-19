#include <iostream>
using namespace std;

int countMatchesOfTournament(int n)
{ //log(n)
    int matches = 0;
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            matches = matches + n / 2;
            n = n / 2;
        }
        else
        {
            matches = matches + (n - 1) / 2;
            n = (n - 1) / 2 + 1;
        }
    }
    return matches;
}

int main()
{
    int n;
    cout << "count matches of tournament is :" << countMatchesOfTournament(14);
}