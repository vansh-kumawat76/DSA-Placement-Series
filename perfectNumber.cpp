#include <iostream>
using namespace std;

bool perfectNumber(int num)
{
    if (num == 1)
        return false;
    int sum = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
            if (i != 1 && i != (num / i))
            {
                sum = sum + (num / i);
            }
        }
    }
    return num == sum;
}

int main()
{
    int num;
    cout << perfectNumber(28);
}