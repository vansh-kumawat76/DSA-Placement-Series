#include <iostream>
using namespace std;

int addDigit(int n)
{
    while (n >= 10)
    { // keep reducing until single digit.
        int sum = 0;
        while (n)
        {
            sum = sum + (n % 10);
            n = n / 10;
        }
        n = sum;
    }
    return n;
}

int main()
{
    int n;
    cout << "add digit is :" << addDigit(38);
}