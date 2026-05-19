#include <iostream>
using namespace std;

int numberOfSteps(int n)
{
    int steps = 0;
    while (n)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n - 1;
        }
        steps++;
    }
    return steps;
}
int main()
{
    int n;
    cout << "number of steps is :" << numberOfSteps(14);
}