#include <iostream>
using namespace std;

int getSum(int a, int b)
{
    while (b)
    {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}
int main()
{
    int a, b;
    cout << "sum of two integer is :" << getSum(3, 14);
}